#include "Aimbot.h"
#include "../Utils/Game.h"
#include "../Utils/Logger.h"
#include <algorithm> 
#include <windows.h>
#include "../Overlay/overlay.h"
#include "Imgui.h" 



void Aimbot::FindClosestTarget() {
    Aimbot::Target = nullptr;
    float minDistance = FLT_MAX;


    SDK::TArray<SDK::AActor*> actors;
    Game::GameplayStatics->GetAllActorsOfClass(Game::World, SDK::ACharacter::StaticClass(), &actors);

    const ImVec2& displaySize = ImGui::GetIO().DisplaySize;
    const SDK::FVector2D screenCenter = { displaySize.x / 2.0, displaySize.y / 2.0 };

    for (int i = 0; i < actors.Num(); i++) {
        if (!actors.IsValidIndex(i) || !actors[i]) continue;

    
        auto* character = static_cast<SDK::ACharacter*>(actors[i]);

        if (character == Game::Player) continue;

        auto mesh = character->Mesh;
        if (!mesh || !mesh->DoesSocketExist(Game::ToName("joint_Head_01"))) continue;

        SDK::FVector headPos = mesh->GetSocketLocation(Game::ToName("joint_Head_01"));
        SDK::FVector2D screenHeadPos;

        if (Game::Controller->ProjectWorldLocationToScreen(headPos, &screenHeadPos, true)) {
            double distanceToCenter = sqrt(pow(screenHeadPos.X - screenCenter.X, 2) + pow(screenHeadPos.Y - screenCenter.Y, 2));

            if (distanceToCenter < overlay::aimbotFov) {
                if (distanceToCenter < minDistance) {
                    minDistance = static_cast<float>(distanceToCenter);
                    Aimbot::Target = character;
                    Aimbot::TargetHeadPosition = headPos;
                }
            }
        }
    }
}

void SmoothAim(const SDK::FRotator& current, const SDK::FRotator& target, float interpSpeed) {
    float deltaTime = 1.0f / 120.0f;
    SDK::FRotator newRotation = SDK::UKismetMathLibrary::RLerp(current, target, interpSpeed * deltaTime, true);

    newRotation.Roll = 0.0f;
    Game::Controller->SetControlRotation(newRotation);
}

void Aimbot::RunAimbot() {
    if (!Game::Controller->PlayerCameraManager) return;

    Aimbot::FindClosestTarget();

    if (Aimbot::Target && GetAsyncKeyState(overlay::aimbotKey) & 0x8000) {
        float interpSpeed = 5.0f + (1.0f - overlay::aimbotSmoothness) * 45.0f;

        SDK::FVector cameraLocation = Game::Controller->PlayerCameraManager->GetCameraLocation();
        SDK::FRotator targetRotation = SDK::UKismetMathLibrary::FindLookAtRotation(cameraLocation, Aimbot::TargetHeadPosition);
        
        if (Game::Controller->LineOfSightTo(Aimbot::Target, Aimbot::Target->K2_GetActorLocation(), false)) {
            SmoothAim(Game::Controller->GetControlRotation(), targetRotation, interpSpeed);
        }
    }
}