#define NOMINMAX 
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include "ESP.h" 
#include "../Overlay/overlay.h"
#include "../Utils/Game.h"
#include "Memory.h" 
#include <string>
#include <vector>
#include <algorithm>
#include <cmath> 
#include <cstdio>
#include "Imgui.h" 
#include <cfloat>
#include <fstream>




namespace {
    constexpr float  ESP_BOX_WIDTH_RATIO = 0.55f;
    constexpr float  RADAR_X = 50.0f;
    constexpr float  RADAR_Y = 50.0f;
    constexpr float  RADAR_SIZE = 200.0f;
    constexpr double RADAR_RANGE = 5000.0;
    constexpr double ALTITUDE_DIFFERENCE_THRESHOLD = 200.0;
}


static ImU32 GetRainbowColor() {
    float time = static_cast<float>(ImGui::GetTime());
    float hue = fmodf(time * overlay::rainbowSpeed, 1.0f);
    ImVec4 rgb_color;
    ImGui::ColorConvertHSVtoRGB(hue, 1.0f, 1.0f, rgb_color.x, rgb_color.y, rgb_color.z);
    return IM_COL32((int)(rgb_color.x * 255), (int)(rgb_color.y * 255), (int)(rgb_color.z * 255), 255);
}

static ImU32 GetEspColorForCharacter(SDK::ACharacter* character) {
    const bool isFriendly = false;
    const bool isVisible = true;
    if (isFriendly) return overlay::friendlyEspColor;
    return isVisible ? overlay::espVisibleColor : overlay::espOccludedColor;
}

static ImU32 GetHealthColorGradient(float percent) {
    ImVec4 high = ImGui::ColorConvertU32ToFloat4(overlay::healthBarHighColor);
    ImVec4 mid = ImGui::ColorConvertU32ToFloat4(overlay::healthBarMidColor);
    ImVec4 low = ImGui::ColorConvertU32ToFloat4(overlay::healthBarLowColor);
    ImVec4 result;
    if (percent > 0.5f) {
        float scale = (percent - 0.5f) * 2.0f;
        result = { mid.x + (high.x - mid.x) * scale, mid.y + (high.y - mid.y) * scale, mid.z + (high.z - mid.z) * scale, mid.w + (high.w - mid.w) * scale };
    }
    else {
        float scale = percent * 2.0f;
        result = { low.x + (mid.x - low.x) * scale, low.y + (mid.y - low.y) * scale, low.z + (mid.z - low.z) * scale, low.w + (mid.w - low.w) * scale };
    }
    return ImGui::ColorConvertFloat4ToU32(result);
}

static void SafeGetAllCharacterActors(std::vector<SDK::ACharacter*>& outActors) {
    outActors.clear();
    if (!Game::World) return;
    SDK::ULevel* persistentLevel;
    if (!Memory::SafeRead(reinterpret_cast<uintptr_t>(&Game::World->PersistentLevel), persistentLevel) || !persistentLevel) return;
    uintptr_t actorsArrayAddr = reinterpret_cast<uintptr_t>(&persistentLevel->Actors);
    int actorCount;
    SDK::AActor** actorsData;
    if (!Memory::SafeRead(actorsArrayAddr, actorsData) || !Memory::SafeRead(actorsArrayAddr + sizeof(void*), actorCount) || actorCount <= 0 || !actorsData) return;
    const int MAX_ACTORS_TO_PROCESS = 1024;
    actorCount = std::min(actorCount, MAX_ACTORS_TO_PROCESS);
    for (int i = 0; i < actorCount; ++i) {
        SDK::AActor* currentActor;
        if (Memory::SafeRead(reinterpret_cast<uintptr_t>(&actorsData[i]), currentActor) && currentActor) {
            if (currentActor->IsA(SDK::ACharacter::StaticClass())) {
                outActors.push_back(static_cast<SDK::ACharacter*>(currentActor));
            }
        }
    }
}


static void RenderPalletESP(ImDrawList* drawList, SDK::APallet* pallet, const SDK::FVector& localPlayerLocation) {
    if (!pallet) return;
    const char* stateText = pallet->GetIsPulledDown() ? "Pallet (Down)" : "Pallet (Up)";
    ImU32 color = pallet->GetIsPulledDown() ? IM_COL32(255, 80, 80, 255) : IM_COL32(80, 255, 80, 255);
    ESP::RenderActorESP(drawList, pallet, stateText, color, localPlayerLocation);
}

static void RenderTotemESP(ImDrawList* drawList, SDK::ATotem* totem, const SDK::FVector& localPlayerLocation) {
    if (!totem) return;
    SDK::ETotemState state = totem->GetTotemState();
   
    const char* stateText = "Totem";
    ImU32 color = IM_COL32(255, 255, 255, 255); 
    if (state == SDK::ETotemState::Hex) {
        stateText = "Hex Totem";
        color = IM_COL32(255, 0, 0, 255);
    }
    else if (state == SDK::ETotemState::Boon) {
        stateText = "Boon Totem";
        color = IM_COL32(0, 150, 255, 255);
    }
   ESP::RenderActorESP(drawList, totem, stateText, color, localPlayerLocation);
}

static void RenderHatchESP(ImDrawList* drawList, SDK::AHatch* hatch, const SDK::FVector& localPlayerLocation) {
    if (!hatch) return;
    SDK::EHatchState state = hatch->GetHatchState();
    const char* stateText = "Hatch";
    if (state == SDK::EHatchState::Opened) {
        stateText = "Hatch (Open)";
    }
    else if (state == SDK::EHatchState::DefaultClose) {
        stateText = "Hatch (Closed)";
    }
    ESP::RenderActorESP(drawList, hatch, stateText, IM_COL32(255, 0, 255, 255), localPlayerLocation);
}



//
static void DrawBones(ImDrawList* drawList, SDK::USkeletalMeshComponent* mesh) {
    if (!mesh) return;
    ImU32 boneColor = overlay::rainbowModeEnabled ? GetRainbowColor() : ImGui::GetColorU32(ImVec4(overlay::mainEspBoxColor[0], overlay::mainEspBoxColor[1], overlay::mainEspBoxColor[2], 0.9f));
    for (const auto& conn : skeletonConnections) { 
        if (mesh->DoesSocketExist(Game::ToName(conn.bone1_name)) && mesh->DoesSocketExist(Game::ToName(conn.bone2_name))) {
            SDK::FVector b1_world = mesh->GetSocketLocation(Game::ToName(conn.bone1_name));
            SDK::FVector b2_world = mesh->GetSocketLocation(Game::ToName(conn.bone2_name));
            SDK::FVector2D b1_screen, b2_screen;
            if (Game::Controller->ProjectWorldLocationToScreen(b1_world, &b1_screen, false) && Game::Controller->ProjectWorldLocationToScreen(b2_world, &b2_screen, false)) {
                drawList->AddLine({ (float)b1_screen.X, (float)b1_screen.Y }, { (float)b2_screen.X, (float)b2_screen.Y }, boneColor, 1.5f);
            }
        }
    }
}


//need make drawlist->drawbox easier
static void DrawBoxes(ImDrawList* drawList, const ImVec2& topLeft, const ImVec2& bottomRight) {
    if (overlay::mainEspBoxEnabled) {
        ImU32 boxColor = overlay::rainbowModeEnabled ? GetRainbowColor() : IM_COL32((int)(overlay::mainEspBoxColor[0] * 255), (int)(overlay::mainEspBoxColor[1] * 255), (int)(overlay::mainEspBoxColor[2] * 255), 255);
        drawList->AddRect(topLeft, bottomRight, boxColor, 0.0f, ImDrawFlags_None, overlay::mainEspBoxThickness);
    }
    if (overlay::cornerEspBoxEnabled) {
        const float w = (bottomRight.x - topLeft.x), h = (bottomRight.y - topLeft.y);
        const float lineW = w * overlay::cornerFraction, lineH = h * overlay::cornerFraction;
        ImU32 cornerColor = overlay::rainbowModeEnabled ? GetRainbowColor() : IM_COL32((int)(overlay::cornerEspBoxColor[0] * 255), (int)(overlay::cornerEspBoxColor[1] * 255), (int)(overlay::cornerEspBoxColor[2] * 255), 255);
        drawList->AddLine(topLeft, { topLeft.x + lineW, topLeft.y }, cornerColor, overlay::cornerEspBoxThickness);
        drawList->AddLine(topLeft, { topLeft.x, topLeft.y + lineH }, cornerColor, overlay::cornerEspBoxThickness);
        drawList->AddLine({ bottomRight.x - lineW, topLeft.y }, { bottomRight.x, topLeft.y }, cornerColor, overlay::cornerEspBoxThickness);
        drawList->AddLine({ bottomRight.x, topLeft.y }, { bottomRight.x, topLeft.y + lineH }, cornerColor, overlay::cornerEspBoxThickness);
        drawList->AddLine({ topLeft.x, bottomRight.y - lineH }, { topLeft.x, bottomRight.y }, cornerColor, overlay::cornerEspBoxThickness);
        drawList->AddLine({ topLeft.x, bottomRight.y }, { topLeft.x + lineW, bottomRight.y }, cornerColor, overlay::cornerEspBoxThickness);
        drawList->AddLine({ bottomRight.x - lineW, bottomRight.y }, bottomRight, cornerColor, overlay::cornerEspBoxThickness);
        drawList->AddLine({ bottomRight.x, bottomRight.y - lineH }, bottomRight, cornerColor, overlay::cornerEspBoxThickness);
    }
}

static void DrawHealth(ImDrawList* drawList, SDK::ACharacter* character, const ImVec2& topLeft, const ImVec2& bottomRight) {
    if (!overlay::healthBarEnabled || !character) return;
    const float currentHealth = 100.0f; // check sdk class Asurvior
    const float maxHealth = 100.0f;     
    if (maxHealth <= 0.0f) return;
    const float healthPercent = std::clamp(currentHealth / maxHealth, 0.0f, 1.0f);
    const float espHeight = bottomRight.y - topLeft.y;
    ImVec2 barTop(topLeft.x - overlay::healthBarWidth - 2.0f, topLeft.y), barBottom(topLeft.x - 2.0f, bottomRight.y);
    ImVec2 filledBarTop(barTop.x, barBottom.y - (espHeight * healthPercent));
    ImU32 healthColor = GetHealthColorGradient(healthPercent);
    drawList->AddRectFilled(barTop, barBottom, IM_COL32(0, 0, 0, 180));
    drawList->AddRectFilled(filledBarTop, barBottom, healthColor);
    drawList->AddRect(barTop, barBottom, IM_COL32(0, 0, 0, 255));
}

static void DrawInfoText(ImDrawList* drawList, SDK::ACharacter* character, const SDK::FVector& localPlayerLocation, const SDK::FVector& rootLoc, const ImVec2& topLeft, const ImVec2& bottomRight) {
    if (!character) return;
    float yOffsetAbove = topLeft.y - 2.0f, yOffsetBelow = bottomRight.y + 2.0f;
    const float centerX = topLeft.x + (bottomRight.x - topLeft.x) / 2.0f;
    if (overlay::nameEspEnabled) {
        std::string name = character->PlayerState->GetPlayerName().ToString();
        ImVec2 textSize = ImGui::CalcTextSize(name.c_str());
        yOffsetAbove -= textSize.y;
        drawList->AddText({ centerX - textSize.x / 2.0f, yOffsetAbove }, overlay::textEspColor, name.c_str());
    }
    if (overlay::healthTextEnabled) {
        char healthBuffer[16];
        sprintf_s(healthBuffer, "[%d HP]", (int)100.0f);
        ImVec2 textSize = ImGui::CalcTextSize(healthBuffer);
        yOffsetAbove -= textSize.y;
        drawList->AddText({ centerX - textSize.x / 2.0f, yOffsetAbove }, overlay::textEspColor, healthBuffer);
    }
    if (overlay::distanceEspEnabled) {
        const double distanceMeters = localPlayerLocation.GetDistanceTo(rootLoc);
        char distBuffer[16];
        sprintf_s(distBuffer, "%.0fm", distanceMeters);
        ImVec2 textSize = ImGui::CalcTextSize(distBuffer);
        drawList->AddText({ centerX - textSize.x / 2.0f, yOffsetBelow }, overlay::textEspColor, distBuffer);
    }
}

static void ESP::RenderActorESP(ImDrawList* drawList, SDK::AActor* actor, const char* displayName, ImU32 color, const SDK::FVector& localPlayerLocation) {
    if (!actor || !Game::Controller) return;
    SDK::FVector actorLocation = actor->K2_GetActorLocation();
    SDK::FVector2D screenLocation;
    if (!Game::Controller->ProjectWorldLocationToScreen(actorLocation, &screenLocation, false)) return;
    const double distanceMeters = localPlayerLocation.GetDistanceTo(actorLocation) / 100.0; //maths wrong 
    char textBuffer[128];
    sprintf_s(textBuffer, "%s [%.0fm]", displayName, distanceMeters);
    ImVec2 textSize = ImGui::CalcTextSize(textBuffer);
    ImVec2 textPos = { (float)screenLocation.X - textSize.x / 2.0f, (float)screenLocation.Y - textSize.y / 2.0f };
    drawList->AddText(textPos, color, textBuffer);
}


void ESP::RenderCharacterESP(ImDrawList* drawList, SDK::ACharacter* character, const SDK::FVector& localPlayerLocation) {
    if (!character || !character->Mesh || !Game::Controller) return;
    SDK::USkeletalMeshComponent* mesh = character->Mesh;
    if (!mesh->DoesSocketExist(Game::ToName("joint_Head_01")) || !mesh->DoesSocketExist(Game::ToName("joint_Char"))) return;

    SDK::FVector headLoc = mesh->GetSocketLocation(Game::ToName("joint_Head_01"));
    SDK::FVector rootLoc = mesh->GetSocketLocation(Game::ToName("joint_Char"));
    SDK::FVector2D screenHead, screenRoot;
    if (!Game::Controller->ProjectWorldLocationToScreen(headLoc, &screenHead, false) || !Game::Controller->ProjectWorldLocationToScreen(rootLoc, &screenRoot, false)) return;

    float espHeight = static_cast<float>(fabs(screenHead.Y - screenRoot.Y));
    if (espHeight < 5.0f) return;
    float espWidth = espHeight * ESP_BOX_WIDTH_RATIO;
    ImVec2 topLeft((float)(screenHead.X - espWidth / 2.0f), (float)screenHead.Y);
    ImVec2 bottomRight((float)(screenHead.X + espWidth / 2.0f), (float)screenRoot.Y);
    if (topLeft.y > bottomRight.y) std::swap(topLeft.y, bottomRight.y);

    if (overlay::boneEspEnabled) DrawBones(drawList, mesh);


    DrawBoxes(drawList, topLeft, bottomRight);
    DrawHealth(drawList, character, topLeft, bottomRight);
    DrawInfoText(drawList, character, localPlayerLocation, rootLoc, topLeft, bottomRight);

    if (overlay::headDotEnabled) {
        drawList->AddCircleFilled({ (float)screenHead.X, (float)screenHead.Y }, overlay::headDotRadius, overlay::headDotColor);
    }
    if (overlay::snaplinesEnabled) {
        ImU32 snaplineColor = overlay::rainbowModeEnabled ? GetRainbowColor() : overlay::snaplineColor;
        const ImVec2& displaySize = ImGui::GetIO().DisplaySize;


        ImVec2 snapOrigin(displaySize.x / 2.0f, displaySize.y);

        drawList->AddLine(snapOrigin, { (float)screenRoot.X, (float)screenRoot.Y }, snaplineColor, 1.0f);
    }
}

static void RenderRadar(ImDrawList* drawList, const SDK::FVector& localLoc, const SDK::FRotator& localRot, const std::vector<SDK::ACharacter*>& actors) {
    
    const ImVec2 radarCenter(RADAR_X + RADAR_SIZE / 2.0f, RADAR_Y + RADAR_SIZE / 2.0f);
    const float radarRadius = RADAR_SIZE / 2.0f;
    const double yawRad = localRot.Yaw * (M_PI / 180.0);
    
    drawList->PushClipRect({ RADAR_X, RADAR_Y }, { RADAR_X + RADAR_SIZE, RADAR_Y + RADAR_SIZE }, true);
    drawList->AddCircleFilled(radarCenter, radarRadius, IM_COL32(25, 25, 25, 150));
    drawList->AddLine({ radarCenter.x, RADAR_Y }, { radarCenter.x, RADAR_Y + RADAR_SIZE }, IM_COL32(255, 255, 255, 30));
    drawList->AddLine({ RADAR_X, radarCenter.y }, { RADAR_X + RADAR_SIZE, radarCenter.y }, IM_COL32(255, 255, 255, 30));

    for (const auto& character : actors) {
    
        if (!character || character == Game::Player) continue;
        
        SDK::FVector enemyLoc = character->K2_GetActorLocation();
        SDK::FVector relativePos = enemyLoc - localLoc;
        
        double distance2D = sqrt(relativePos.X * relativePos.X + relativePos.Y * relativePos.Y);
        
        if (distance2D > RADAR_RANGE) continue;
        
        double enemyYaw = atan2(relativePos.Y, relativePos.X);
        double relativeAngle = enemyYaw - yawRad;
        double pointX_d = radarCenter.x + (distance2D / RADAR_RANGE) * radarRadius * cos(relativeAngle - M_PI / 2.0f);
        double pointY_d = radarCenter.y + (distance2D / RADAR_RANGE) * radarRadius * sin(relativeAngle - M_PI / 2.0f);
       
        ImVec2 dotPos((float)pointX_d, (float)pointY_d);
        
        drawList->AddCircleFilled(dotPos, 4.0f, GetEspColorForCharacter(character));
        drawList->AddCircle(dotPos, 4.0f, IM_COL32(0, 0, 0, 255));
       
        double zDiff = enemyLoc.Z - localLoc.Z;
        if (fabs(zDiff) > ALTITUDE_DIFFERENCE_THRESHOLD) {
            const char* indicator = (zDiff > 0) ? "^" : "v";
            drawList->AddText({ dotPos.x - 4, (zDiff > 0) ? dotPos.y - 15 : dotPos.y + 5 }, IM_COL32(255, 255, 255, 200), indicator);
        }
    }
    const char* dirs[] = { "N", "E", "S", "W" };
    for (int i = 0; i < 4; ++i) {
        float angle = (i * M_PI / 2.0f) - (float)yawRad;
        ImVec2 textPos = { radarCenter.x + cosf(angle - M_PI / 2.0f) * (radarRadius - 10.f), radarCenter.y + sinf(angle - M_PI / 2.0f) * (radarRadius - 10.f) };
        ImVec2 textSize = ImGui::CalcTextSize(dirs[i]);
        drawList->AddText({ textPos.x - textSize.x / 2.f, textPos.y - textSize.y / 2.f }, IM_COL32(255, 255, 255, 180), dirs[i]);
    }
    drawList->PopClipRect();
    drawList->AddCircle(radarCenter, radarRadius, IM_COL32(100, 100, 100, 255), 32, 2.0f);
}




void ESP::RenderESP(ImDrawList* drawList) {
    if (!Game::Player || !Game::World || !Game::Controller) {
        return;
    }



    // even when aim is off render so placed here 
    if (overlay::fovCircleEnabled) {
        ImU32 fovCircleColor = overlay::rainbowModeEnabled ? GetRainbowColor() : overlay::fovCircleColor;
        ImVec2 screenCenter(ImGui::GetIO().DisplaySize.x / 2.0f, ImGui::GetIO().DisplaySize.y / 2.0f);
        drawList->AddCircle(screenCenter, overlay::aimbotFov, fovCircleColor, 100, 1.5f);
    }

    if (overlay::radarEnabled) {
        std::vector<SDK::ACharacter*> characterActorsForRadar;
        SafeGetAllCharacterActors(characterActorsForRadar); 
        RenderRadar(drawList, Game::Player->K2_GetActorLocation(), Game::Controller->GetControlRotation(), characterActorsForRadar);
    }

    if (!overlay::espEnabled) {
        return;
    }

    SDK::FVector localPlayerLocation = Game::Player->K2_GetActorLocation();
    SDK::ULevel* persistentLevel;
    if (!Memory::SafeRead(reinterpret_cast<uintptr_t>(&Game::World->PersistentLevel), persistentLevel) || !persistentLevel) return;

    uintptr_t actorsArrayAddr = reinterpret_cast<uintptr_t>(&persistentLevel->Actors);
    int actorCount;
    SDK::AActor** actorsData;
    if (!Memory::SafeRead(actorsArrayAddr, actorsData) || !Memory::SafeRead(actorsArrayAddr + sizeof(void*), actorCount) || actorCount <= 0 || !actorsData) return;

    const int MAX_ACTORS_TO_PROCESS = 2048;
    actorCount = std::min(actorCount, MAX_ACTORS_TO_PROCESS);

    for (int i = 0; i < actorCount; ++i) {
        SDK::AActor* currentActor;
        if (!Memory::SafeRead(reinterpret_cast<uintptr_t>(&actorsData[i]), currentActor) || !currentActor || currentActor == Game::Player) {
            continue;
        }

        if (overlay::killerEspEnabled && currentActor->IsA(SDK::AKiller::StaticClass())) {
            RenderCharacterESP(drawList, static_cast<SDK::ACharacter*>(currentActor), localPlayerLocation);
            continue;
        }
        if (overlay::survivorEspEnabled && currentActor->IsA(SDK::ASurvivor::StaticClass())) {
            RenderCharacterESP(drawList, static_cast<SDK::ACharacter*>(currentActor), localPlayerLocation);
            continue;
        }
        if (overlay::generatorEspEnabled && currentActor->IsA(SDK::AGenerator::StaticClass())) {
            RenderActorESP(drawList, currentActor, "Generator", overlay::gadgetEspColor, localPlayerLocation);

            continue;
        }
        if (overlay::trapEspEnabled && currentActor->IsA(SDK::ABaseTrap::StaticClass())) {
            RenderActorESP(drawList, currentActor, "TRAP", overlay::gadgetEspColor, localPlayerLocation);
            continue;
        }

        if (overlay::trapEspEnabled && currentActor->IsA(SDK::AZombieCharacter::StaticClass())) {
            RenderActorESP(drawList, currentActor, "TRAP", overlay::gadgetEspColor, localPlayerLocation);
            continue;
        }

        if (overlay::palletEspEnabled && currentActor->IsA(SDK::APallet::StaticClass())) {
            RenderPalletESP(drawList, static_cast<SDK::APallet*>(currentActor), localPlayerLocation);
            continue;
        }
        if (overlay::totemEspEnabled && currentActor->IsA(SDK::ATotem::StaticClass())) {
            RenderTotemESP(drawList, static_cast<SDK::ATotem*>(currentActor), localPlayerLocation);
            continue;
        }
        if (overlay::hatchEspEnabled && currentActor->IsA(SDK::AHatch::StaticClass())) {
            RenderHatchESP(drawList, static_cast<SDK::AHatch*>(currentActor), localPlayerLocation);
            continue;
        }
        if (overlay::chestEspEnabled && currentActor->IsA(SDK::ASearchable::StaticClass())) {
            RenderActorESP(drawList, currentActor, "Chest", IM_COL32(255, 255, 0, 255), localPlayerLocation);
            continue;
        }
        if (overlay::exitGateEspEnabled && currentActor->IsA(SDK::AEscapeDoor::StaticClass())) {
            RenderActorESP(drawList, currentActor, "Exit Gate", IM_COL32(0, 255, 255, 255), localPlayerLocation);
            continue;
        }
        if (overlay::windowEspEnabled && currentActor->IsA(SDK::AWindow::StaticClass())) {
            RenderActorESP(drawList, currentActor, "Window", IM_COL32(150, 150, 255, 255), localPlayerLocation);
            continue;
        }
        if (overlay::meatHookEspEnabled && currentActor->IsA(SDK::AMeatHook::StaticClass())) {
            RenderActorESP(drawList, currentActor, "Hook", IM_COL32(200, 200, 200, 255), localPlayerLocation);
            continue;
        }

    }
}