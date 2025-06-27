#define _CRT_SECURE_NO_WARNINGS

#include "Overlay/overlay.h" 
#include <imgui.h>
#include <windows.h>
#include <imgui_impl_dx11.h> 
#include <imgui_impl_win32.h> 
#include <string>
#include "Utils/Game.h" 
#include "Utils/Logger.h" 
#include "Utils/Config.h" 
#include "imgui_internal.h" 
 #include <string>
 #include <vector>
 #include <map>
 #include <utility>


#include "IconsFontAwesome5.h"

namespace overlay {
    inline bool flightAndNoclipEnabled = false; 

   
   
    inline bool changeObsession = false;         


    inline bool perfectSkillChecks = false;
    inline bool forceCancelInteraction = false; 
    inline bool speedHackEnabled = false;
    inline float speedHackMultiplier = 1.5f; 

    inline float teleportDistance = 500.0f; 


    bool rapidCrouchSpam = false;
    bool forceLungeState = false;

    bool instantHealSelf = false;
    bool instantUnhookSelf = false;
     bool instantOpenExitGates = false;
     bool instantCompleteGenerators = false;
     bool revealAllTotems = false;

     inline bool serverSideSpeedEnabled = false;
     inline float serverSideSpeedMultiplier = 2.0f; 

    bool enabled = true;
    inline bool forceShowAuras = false; 
    inline bool forceShowSurvivorAuras = false;
    inline bool forceShowGeneratorAuras = false;
    inline bool forceShowTotemAuras = false;
    inline bool forceShowTrapAuras = false;
    inline bool forceShowChestAuras = false;
    inline bool forceShowPalletAuras = false;
    inline bool forceShowHookAuras = false;
    inline bool forceShowExitGateAuras = false;
    inline bool forceShowHatchAuras = false;


    inline bool palletEspEnabled = false;
    inline bool windowEspEnabled = false;
    inline bool chestEspEnabled = false;
    inline bool totemEspEnabled = false;
    inline bool meatHookEspEnabled = false;
    inline bool hatchEspEnabled = false;
    inline bool exitGateEspEnabled = false;

    inline bool instantActionsEnabled = false;
    inline float instantActionSpeedMultiplier = 10.0f; 
    inline bool perfectSkillChecksEnabled = false;
   inline bool forceShowKillerAura = false;

    bool superJumpEnabled = false;
        bool noGravityEnabled = false;
    bool highAirControlEnabled = false;

     bool  rainbowModeEnabled = false;
     float rainbowSpeed = 0.5f;


    bool aimbotEnabled = false;
    bool triggerbotEnabled = false;
    bool disableAimbotFlashed = false;
    bool disableAimbotSmoke = false;
    bool disableAimbotJump = false;
    int aimbotKey = VK_LBUTTON; 

    bool espEnabled = false;
    bool mainEspBoxEnabled = false;
    bool cornerEspBoxEnabled = false;
    bool boneEspEnabled = false;;
    bool nameEspEnabled = false;
    bool healthBarEnabled = false;
    bool healthTextEnabled = false;
    bool distanceEspEnabled = false;
    bool snaplinesEnabled = false;
    bool headDotEnabled = false;
    bool glowEspEnabled = false;
    bool  superSpeedEnabled = false;
    bool noClipEnabled = false;


    inline bool forceRunState = true; // Best to keep this on for speed-related exploits

    // -- Loadout Injection --
    inline char perk1_ID[64] = "SelfCare";
    inline char perk2_ID[64] = "SprintBurst";
    inline char perk3_ID[64] = "Adrenaline";
    inline char perk4_ID[64] = "DeadHard";
    inline char itemToGive[64] = "S22_key_01";
    inline bool triggerInjectPerks = false; // Button
    inline bool triggerGiveItem = false;    // Button

    // -- Match Control (Buttons) --
    inline bool triggerForceObjectives = false;
    inline bool triggerEndGame = false;
    inline bool triggerLeaveGame = false;
    inline bool triggerInstantHeal = false;
    inline bool triggerInstantUnhook = false;

    // -- Chat & Trolling --
    inline char fakeChatMessage[128] = "GG EZ";
    inline char fakeChatSender[64] = "SYSTEM";
    inline bool triggerSendFakeChat = false; // Button








        // --- NEW, ADVANCED MOVEMENT EXPLOIT SETTINGS ---
        inline bool useCustomMovementMode = false;
    inline int customMovementMode = 8; // A common value for custom modes

    inline bool forceLungeSpeed = false;

    inline bool useSpeedStatModifier = false;
    inline float speedStatMultiplier = 1.25f; // +25% speed

    inline bool useServerTeleport = false; // For the hotkey
  //  inline float teleportDistance = 500.0f; // 5 meters

    // ESP - World Visuals (Gadgets, Vehicles)
    bool gadgetEspEnabled = false;
    bool showGadgetName = false;
    bool showGadgetDistance = false;
    bool vehicleEspEnabled = false;
    bool showVehicleName = false;
    bool showVehicleDistance = false;
    bool showVehicleRider = false;

    // ESP - Screen Effects & Helpers
    bool fovCircleEnabled = false;
    bool lineToClosestEnemyEnabled = false;
    bool radarEnabled = false;

    // Visuals - Chams
    bool weaponChamsEnabled = false;

    // Miscellaneous Features
    bool bhopEnabled = false;
    bool teleport = false;

    bool killerEspEnabled = false;
    bool survivorEspEnabled = false;
    bool zombieEspEnabled = false;
    bool generatorEspEnabled = false;
    bool trapEspEnabled = false;
    // --- END ADDED ---

    // --- Color & Visual Parameters ---

    ImColor weaponChamsColorImGui = ImColor(255, 0, 255, 255); // Bright Pink

     bool autoRepairGenerators = false;

    ImU32 glowColor;

    // ESP Element Colors
    float mainEspBoxColor[3] = { 1.0f, 0.0f, 0.0f };     
    float cornerEspBoxColor[3] = { 0.0f, 1.0f, 0.0f };  
    float espColor[3] = { 0.0f, 1.0f, 0.0f };         
    ImU32 textEspColor;                               
    ImU32 snaplineColor;                                
    ImU32 lineToEnemyColor;                            
    ImU32 fovCircleColor;                              
    ImU32 gadgetEspColor;                              
    ImU32 vehicleEspColor;                            

    // Health Bar Colors
    ImU32 healthBarHighColor;                          
    ImU32 healthBarMidColor;                           
    ImU32 healthBarLowColor;                           

    // Team/State Colors
    ImU32 friendlyEspColor;                            
    ImU32 enemyEspColor;                               
    ImU32 espVisibleColor;                             
    ImU32 espOccludedColor;                            

    ImU32 killerEspColor;
    ImU32 survivorEspColor;
    ImU32 zombieEspColor;
    ImU32 generatorEspColor;
    ImU32 trapEspColor;

    float actionSpeedMultiplier = 10.0f; 




    float glowEspIntensity = 0.5f;
    float healthBarWidth = 5.0f;
    float headDotRadius = 3.0f;
    float cornerEspBoxThickness = 1.5f;
    float fovCircleRadius = 100.0f;
    float distanceUnitConversion = 100.0f; 
    float mainEspBoxThickness = 2.0f;
    float cornerFraction = 0.2f;   
    ImVec2 snaplineOrigin = ImVec2(0.5f, 0.0f); 

    float aimbotFov = 30.0f;
    float aimbotSmoothness = 0.5f;


    // thanks ai
    void InitializeColors() {
        killerEspColor = IM_COL32(255, 20, 20, 255);
        survivorEspColor = IM_COL32(20, 150, 255, 255);
        zombieEspColor = IM_COL32(110, 200, 60, 255);
        generatorEspColor = IM_COL32(255, 255, 0, 255); 
        trapEspColor = IM_COL32(255, 100, 0, 255);      
        textEspColor = IM_COL32(255, 255, 255, 255);    // White
        glowColor = IM_COL32(255, 0, 0, 150);           // Red, semi-transparent
        healthBarHighColor = IM_COL32(0, 255, 0, 255);  // Green
        healthBarMidColor = IM_COL32(255, 255, 0, 255); // Yellow
        healthBarLowColor = IM_COL32(255, 0, 0, 255);   // Red
        snaplineColor = IM_COL32(255, 255, 255, 100);   // White, somewhat transparent
        headDotColor = IM_COL32(255, 0, 0, 255);        // Red
        fovCircleColor = IM_COL32(255, 255, 255, 100);  // White, somewhat transparent
        lineToEnemyColor = IM_COL32(255, 0, 0, 180);    // Red, mostly opaque
        friendlyEspColor = IM_COL32(0, 255, 0, 255);    // Green for friendlies
        enemyEspColor = IM_COL32(255, 0, 0, 255);       // Red for enemies
        espVisibleColor = IM_COL32(0, 255, 0, 255);     // Green (example, could be enemyEspColor)
        espOccludedColor = IM_COL32(255, 165, 0, 180);  // Orange, somewhat transparent (example)
        gadgetEspColor = IM_COL32(0, 150, 255, 200);    // Blue-ish
        vehicleEspColor = IM_COL32(255, 255, 0, 200);   // Yellow-ish
    }


}

bool amr = false;

void setup_obsidian_style() {
    ImGuiStyle& style = ImGui::GetStyle();

    ImGuiIO& io = ImGui::GetIO();



    style.WindowPadding = ImVec2(8.0f, 8.0f);
    style.FramePadding = ImVec2(6.0f, 4.0f); 
    style.CellPadding = ImVec2(4.0f, 4.0f);
    style.ItemSpacing = ImVec2(8.0f, 7.0f);
    style.ItemInnerSpacing = ImVec2(5.0f, 5.0f);
    style.TouchExtraPadding = ImVec2(0.0f, 0.0f);
    style.IndentSpacing = 21.0f;
    style.ScrollbarSize = 14.0f;
    style.GrabMinSize = 12.0f;

    style.WindowBorderSize = 1.0f;
    style.ChildBorderSize = 1.0f;
    style.PopupBorderSize = 1.0f;
    style.FrameBorderSize = 1.0f;
    style.TabBorderSize = 0.0f;
    style.WindowRounding = 0.0f;
    style.ChildRounding = 0.0f;
    style.FrameRounding = 2.0f;
    style.PopupRounding = 0.0f;
    style.ScrollbarRounding = 2.0f;
    style.GrabRounding = 2.0f;
    style.LogSliderDeadzone = 4.0f;
    style.TabRounding = 3.0f;

    ImVec4* colors = style.Colors;
    const ImVec4 accent = ImVec4(0.40f, 0.15f, 0.95f, 1.00f);
    const ImVec4 accent_hover = ImVec4(0.50f, 0.25f, 1.00f, 1.00f);
    const ImVec4 accent_active = ImVec4(0.35f, 0.10f, 0.85f, 1.00f);
    colors[ImGuiCol_Text] = ImVec4(0.95f, 0.95f, 0.95f, 1.00f);
    colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
    colors[ImGuiCol_WindowBg] = ImVec4(0.06f, 0.06f, 0.06f, 0.94f);
    colors[ImGuiCol_ChildBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.00f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
    colors[ImGuiCol_Border] = ImVec4(0.15f, 0.15f, 0.15f, 1.00f);
    colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_FrameBg] = ImVec4(0.04f, 0.04f, 0.04f, 0.54f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.15f, 0.15f, 0.15f, 0.80f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
    colors[ImGuiCol_TitleBg] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
    colors[ImGuiCol_CheckMark] = accent;
    colors[ImGuiCol_SliderGrab] = accent;
    colors[ImGuiCol_SliderGrabActive] = accent_active;
    colors[ImGuiCol_Button] = accent;
    colors[ImGuiCol_ButtonHovered] = accent_hover;
    colors[ImGuiCol_ButtonActive] = accent_active;
    colors[ImGuiCol_Header] = accent;
    colors[ImGuiCol_HeaderHovered] = accent_hover;
    colors[ImGuiCol_HeaderActive] = accent_active;
    colors[ImGuiCol_Separator] = colors[ImGuiCol_Border];
    colors[ImGuiCol_SeparatorHovered] = accent;
    colors[ImGuiCol_SeparatorActive] = accent_active;
    colors[ImGuiCol_ResizeGrip] = accent;
    colors[ImGuiCol_ResizeGripHovered] = accent_hover;
    colors[ImGuiCol_ResizeGripActive] = accent_active;
    colors[ImGuiCol_Tab] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
    colors[ImGuiCol_TabHovered] = accent_hover;
    colors[ImGuiCol_TabActive] = accent;
    colors[ImGuiCol_TabUnfocused] = ImVec4(0.07f, 0.07f, 0.07f, 0.97f);
    colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_PlotLines] = accent;
    colors[ImGuiCol_PlotLinesHovered] = accent_hover;
    colors[ImGuiCol_PlotHistogram] = accent;
    colors[ImGuiCol_PlotHistogramHovered] = accent_hover;
    colors[ImGuiCol_TableHeaderBg] = accent;
    colors[ImGuiCol_TextSelectedBg] = accent_hover;
    colors[ImGuiCol_DragDropTarget] = accent;
    colors[ImGuiCol_NavHighlight] = accent;
    colors[ImGuiCol_NavWindowingHighlight] = accent;
    colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.20f, 0.20f, 0.20f, 0.60f);
}

void ColorEdit4U32(const char* label, ImU32& colorU32, const char* tooltip = nullptr) {
    ImVec4 colorVec4 = ImGui::ColorConvertU32ToFloat4(colorU32);
    if (ImGui::ColorEdit4(label, &colorVec4.x, ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel)) {
        colorU32 = ImGui::ColorConvertFloat4ToU32(colorVec4);
    }
    ImGui::SameLine(); ImGui::TextUnformatted(label);
    if (tooltip && ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenBlockedByPopup | ImGuiHoveredFlags_AllowWhenOverlapped)) ImGui::SetTooltip(tooltip);
}
void ColorEdit4ImColor(const char* label, ImColor& colorIm, const char* tooltip = nullptr) {
    ImVec4 tempColor = colorIm;
    if (ImGui::ColorEdit4(label, &tempColor.x, ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel)) {
        colorIm = ImColor(tempColor);
    }
    ImGui::SameLine(); ImGui::TextUnformatted(label);
    if (tooltip && ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenBlockedByPopup | ImGuiHoveredFlags_AllowWhenOverlapped)) ImGui::SetTooltip(tooltip);
}
void ColorEdit3Float(const char* label, float col[3], const char* tooltip = nullptr) {
    if (ImGui::ColorEdit3(label, col, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel)) {}
    ImGui::SameLine(); ImGui::TextUnformatted(label);
    if (tooltip && ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenBlockedByPopup | ImGuiHoveredFlags_AllowWhenOverlapped)) ImGui::SetTooltip(tooltip);
}

namespace gui_helpers {
    // The Whisper function remains the same
    void Whisper(const char* text) {
        ImGui::PushStyleColor(ImGuiCol_Text, ImGui::GetStyle().Colors[ImGuiCol_TextDisabled]);
        ImGui::TextWrapped(text);
        ImGui::PopStyleColor();
    }

    void DrawVisualsPreview(
        bool b_full_box, float* full_box_color,
        bool b_corner_box, float* corner_box_color, float corner_box_thick, float corner_box_frac,
        bool b_skeleton, ImU32 skeleton_color,
        bool b_name, ImU32 name_color,
        bool b_health_bar, float health_bar_w, ImU32 hp_high, ImU32 hp_mid, ImU32 hp_low,
        bool b_head_dot, float head_dot_radius, ImU32 head_dot_color
    ) {
        ImDrawList* draw_list = ImGui::GetWindowDrawList();
        const ImVec2 p = ImGui::GetCursorScreenPos();
        const ImVec2 size = ImGui::GetContentRegionAvail();
        const float box_h = size.y * 0.75f;
        const float box_w = box_h * 0.4f;
        const ImVec2 box_min = { p.x + (size.x - box_w) / 2, p.y + (size.y - box_h) / 2 };
        const ImVec2 box_max = { box_min.x + box_w, box_min.y + box_h };
        const ImVec2 box_center = { box_min.x + box_w / 2, box_min.y + box_h / 2 };

        if (b_full_box) { draw_list->AddRect(box_min, box_max, ImGui::ColorConvertFloat4ToU32({ full_box_color[0], full_box_color[1], full_box_color[2], 1.0f }), 0.0f, 0, 1.5f); }
        if (b_corner_box) {
            float line_len_x = box_w * corner_box_frac; float line_len_y = box_h * corner_box_frac;
            ImU32 color = ImGui::ColorConvertFloat4ToU32({ corner_box_color[0], corner_box_color[1], corner_box_color[2], 1.0f });
            draw_list->AddLine({ box_min.x, box_min.y }, { box_min.x + line_len_x, box_min.y }, color, corner_box_thick);
            draw_list->AddLine({ box_min.x, box_min.y }, { box_min.x, box_min.y + line_len_y }, color, corner_box_thick);
            draw_list->AddLine({ box_max.x, box_min.y }, { box_max.x - line_len_x, box_min.y }, color, corner_box_thick);
            draw_list->AddLine({ box_max.x, box_min.y }, { box_max.x, box_min.y + line_len_y }, color, corner_box_thick);
            draw_list->AddLine({ box_min.x, box_max.y }, { box_min.x + line_len_x, box_max.y }, color, corner_box_thick);
            draw_list->AddLine({ box_min.x, box_max.y }, { box_min.x, box_max.y - line_len_y }, color, corner_box_thick);
            draw_list->AddLine({ box_max.x, box_max.y }, { box_max.x - line_len_x, box_max.y }, color, corner_box_thick);
            draw_list->AddLine({ box_max.x, box_max.y }, { box_max.x, box_max.y - line_len_y }, color, corner_box_thick);
        }
        if (b_name) {
            const char* name = "Killuano"; ImVec2 text_size = ImGui::CalcTextSize(name);
            draw_list->AddText({ box_center.x - text_size.x / 2, box_min.y - text_size.y - 2 }, name_color, name);
        }
        if (b_health_bar) {
            float health_percentage = 0.7f; float bar_height = box_h * health_percentage;
            ImU32 health_color = health_percentage > 0.5f ? hp_high : (health_percentage > 0.25f ? hp_mid : hp_low);
            draw_list->AddRectFilled({ box_min.x - health_bar_w - 4, box_max.y - bar_height }, { box_min.x - 4, box_max.y }, health_color);
            draw_list->AddRect({ box_min.x - health_bar_w - 4, box_min.y }, { box_min.x - 4, box_max.y }, IM_COL32(0, 0, 0, 150), 0.0f, 0, 1.0f);
        }

        // --- SKELETON DRAWING LOGIC ---
        if (b_skeleton) {
            std::map<std::string, ImVec2> joint_positions;
            joint_positions["joint_Head_01"] = { box_center.x, box_min.y + box_h * 0.05f };
            joint_positions["joint_NeckA_01"] = { box_center.x, box_min.y + box_h * 0.15f };
            joint_positions["joint_TorsoC_01"] = { box_center.x, box_min.y + box_h * 0.25f };
            joint_positions["joint_TorsoB_01"] = { box_center.x, box_min.y + box_h * 0.35f };
            joint_positions["joint_TorsoA_01"] = { box_center.x, box_min.y + box_h * 0.45f };
            joint_positions["joint_Pelvis_01"] = { box_center.x, box_min.y + box_h * 0.55f };
            joint_positions["joint_ClavicleLT_01"] = { box_center.x - box_w * 0.15f, box_min.y + box_h * 0.26f };
            joint_positions["joint_ShoulderLT_01"] = { box_center.x - box_w * 0.25f, box_min.y + box_h * 0.28f };
            joint_positions["joint_ElbowLT_01"] = { box_center.x - box_w * 0.3f,  box_min.y + box_h * 0.42f };
            joint_positions["joint_HandLT_01"] = { box_center.x - box_w * 0.35f, box_min.y + box_h * 0.55f };
            joint_positions["joint_ClavicleRT_01"] = { box_center.x + box_w * 0.15f, box_min.y + box_h * 0.26f };
            joint_positions["joint_ShoulderRT_01"] = { box_center.x + box_w * 0.25f, box_min.y + box_h * 0.28f };
            joint_positions["joint_ElbowRT_01"] = { box_center.x + box_w * 0.3f,  box_min.y + box_h * 0.42f };
            joint_positions["joint_HandRT_01"] = { box_center.x + box_w * 0.35f, box_min.y + box_h * 0.55f };
            joint_positions["joint_HipLT_01"] = { box_center.x - box_w * 0.15f, box_min.y + box_h * 0.56f };
            joint_positions["joint_KneeLT_01"] = { box_center.x - box_w * 0.18f, box_min.y + box_h * 0.75f };
            joint_positions["joint_FootLT_01"] = { box_center.x - box_w * 0.2f,  box_min.y + box_h * 0.95f };
            joint_positions["joint_ToeLT_01"] = { box_center.x - box_w * 0.3f,  box_min.y + box_h * 0.95f };
            joint_positions["joint_HipRT_01"] = { box_center.x + box_w * 0.15f, box_min.y + box_h * 0.56f };
            joint_positions["joint_KneeRT_01"] = { box_center.x + box_w * 0.18f, box_min.y + box_h * 0.75f };
            joint_positions["joint_FootRT_01"] = { box_center.x + box_w * 0.2f,  box_min.y + box_h * 0.95f };
            joint_positions["joint_ToeRT_01"] = { box_center.x + box_w * 0.3f,  box_min.y + box_h * 0.95f };

            const std::vector<std::pair<std::string, std::string>> bones = {
                { "joint_Head_01", "joint_NeckA_01" }, { "joint_NeckA_01", "joint_TorsoC_01" },
                { "joint_TorsoC_01", "joint_TorsoB_01" }, { "joint_TorsoB_01", "joint_TorsoA_01" },
                { "joint_TorsoA_01", "joint_Pelvis_01" }, { "joint_TorsoC_01", "joint_ClavicleLT_01" },
                { "joint_ClavicleLT_01", "joint_ShoulderLT_01" }, { "joint_ShoulderLT_01", "joint_ElbowLT_01" },
                { "joint_ElbowLT_01", "joint_HandLT_01" }, { "joint_TorsoC_01", "joint_ClavicleRT_01" },
                { "joint_ClavicleRT_01", "joint_ShoulderRT_01" }, { "joint_ShoulderRT_01", "joint_ElbowRT_01" },
                { "joint_ElbowRT_01", "joint_HandRT_01" }, { "joint_Pelvis_01", "joint_HipLT_01" },
                { "joint_HipLT_01", "joint_KneeLT_01" }, { "joint_KneeLT_01", "joint_FootLT_01" },
                { "joint_FootLT_01", "joint_ToeLT_01" }, { "joint_Pelvis_01", "joint_HipRT_01" },
                { "joint_HipRT_01", "joint_KneeRT_01" }, { "joint_KneeRT_01", "joint_FootRT_01" },
                { "joint_FootRT_01", "joint_ToeRT_01" }
            };

            for (const auto& bone_pair : bones) {
                auto start_it = joint_positions.find(bone_pair.first);
                auto end_it = joint_positions.find(bone_pair.second);
                if (start_it != joint_positions.end() && end_it != joint_positions.end()) {
                    draw_list->AddLine(start_it->second, end_it->second, skeleton_color, 1.5f);
                }
            }
        }

        if (b_head_dot) {
            ImVec2 head_pos = { box_center.x, box_min.y + box_h * 0.05f };
            draw_list->AddCircleFilled(head_pos, head_dot_radius, head_dot_color);
        }
    }
}


// ai cooking the ui
namespace overlay {
    void draw_gui() {

        ImGuiIO& io = ImGui::GetIO();

 

        if (!overlay::enabled) return;
        setup_obsidian_style();
        ImGui::SetNextWindowSize(ImVec2(850, 650), ImGuiCond_FirstUseEver);
        ImGui::Begin("Killuano Ud Menu", &overlay::enabled, ImGuiWindowFlags_NoCollapse);

        ImGui::Text("DeltaForce");
        ImGui::SameLine(ImGui::GetWindowWidth() - 150);
        ImGui::Text("Build: %s | %s", __DATE__, __TIME__);
        ImGui::Separator();

        if (ImGui::BeginTabBar("MainTabs", ImGuiTabBarFlags_None)) {
            if (ImGui::BeginTabItem("Aimbot")) {
                ImGui::Columns(2, "AimbotColumns", false);
                ImGui::SeparatorText("Core");
                ImGui::Checkbox("Enable Aimbot", &aimbotEnabled);
                ImGui::Spacing();
                ImGui::SliderFloat("FOV", &aimbotFov, 10.0f, 300.0f, "%.1f px");
                ImGui::SameLine(); ImGui::Checkbox("Draw", &fovCircleEnabled);
                ImGui::Spacing();
                ImGui::SliderFloat("Smoothness", &aimbotSmoothness, 0.0f, 1.0f, "%.2f");
                ImGui::Spacing();
                ImGui::SeparatorText("Keybind");
                const char* keyNames[] = { "Left Mouse", "Right Mouse", "Side Mouse 1 (M4)", "Side Mouse 2 (M5)", "Left Shift", "Left Alt" };
                const int keyCodes[] = { VK_LBUTTON, VK_RBUTTON, VK_XBUTTON1, VK_XBUTTON2, VK_LSHIFT, VK_LMENU };
                static int selectedKeyIndex = 0;
                for (int i = 0; i < IM_ARRAYSIZE(keyCodes); i++) if (keyCodes[i] == overlay::aimbotKey) selectedKeyIndex = i;
                if (ImGui::Combo("Aimbot Key", &selectedKeyIndex, keyNames, IM_ARRAYSIZE(keyNames))) {
                    overlay::aimbotKey = keyCodes[selectedKeyIndex];
                }
                ImGui::NextColumn();
                ImGui::SeparatorText("Checks");
                ImGui::Checkbox("Disable if Flashed", &disableAimbotFlashed);
                ImGui::Checkbox("Disable on Smoke", &disableAimbotSmoke);
                ImGui::Checkbox("Disable on Jump", &disableAimbotJump);
                ImGui::Spacing();
                ImGui::SeparatorText("Triggerbot");
                ImGui::Checkbox("Enable Triggerbot", &triggerbotEnabled);
                ImGui::Columns(1);
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("Server RPCs")) {
                ImGui::TextWrapped("Directly call Server-to-Client Remote Procedure Calls. These are the most powerful functions available. Use with extreme caution.");
                gui_helpers::Whisper("WARNING: Misuse of server commands can lead to kicks or bans.");
                ImGui::Separator();

                ImGui::Columns(2, "RPC_Columns", false);

                // --- LEFT COLUMN: MATCH & PLAYER STATE ---
                ImGui::SeparatorText("Match Control");
                if (ImGui::Button("Complete All Objectives", ImVec2(-1, 0))) { overlay::triggerForceObjectives = true; }
                if (ImGui::IsItemHovered()) ImGui::SetTooltip("Calls Server_ForceGameObjectivesCompleted(true).");

                if (ImGui::Button("Start End-Game Collapse", ImVec2(-1, 0))) { overlay::triggerEndGame = true; }
                if (ImGui::IsItemHovered()) ImGui::SetTooltip("Calls Server_RequestEndGame().");

                ImGui::PushStyleColor(ImGuiCol_Button, { 0.8f, 0.1f, 0.1f, 1.0f });
                ImGui::PushStyleColor(ImGuiCol_ButtonHovered, { 1.0f, 0.2f, 0.2f, 1.0f });
                if (ImGui::Button("!!! LEAVE MATCH !!!", ImVec2(-1, 0))) { overlay::triggerLeaveGame = true; }
                ImGui::PopStyleColor(2);
                if (ImGui::IsItemHovered()) ImGui::SetTooltip("Calls Server_LeaveGame(false). Immediately disconnects you.");

                ImGui::Spacing();
                ImGui::SeparatorText("Self Cheats (Survivor)");
                if (ImGui::Button("Instant Heal", ImVec2(-1, 0))) { overlay::triggerInstantHeal = true; }
                if (ImGui::Button("Instant Unhook", ImVec2(-1, 0))) { overlay::triggerInstantUnhook = true; }

                // --- RIGHT COLUMN: MOVEMENT & LOADOUT ---
                ImGui::NextColumn();
                ImGui::SeparatorText("Movement");
                ImGui::Checkbox("Force Run State", &overlay::forceRunState);
                ImGui::Text("Teleport Forward (F1 Hotkey)");
                ImGui::SliderFloat("Distance##Teleport", &overlay::teleportDistance, 100.f, 2000.f, "%.0f cm");

                ImGui::Spacing();
                ImGui::SeparatorText("Loadout Injection (Experimental)");
                ImGui::InputText("Perk 1", overlay::perk1_ID, IM_ARRAYSIZE(overlay::perk1_ID));
                ImGui::InputText("Perk 2", overlay::perk2_ID, IM_ARRAYSIZE(overlay::perk2_ID));
                ImGui::InputText("Perk 3", overlay::perk3_ID, IM_ARRAYSIZE(overlay::perk3_ID));
                ImGui::InputText("Perk 4", overlay::perk4_ID, IM_ARRAYSIZE(overlay::perk4_ID));
                if (ImGui::Button("Inject Perks", ImVec2(-1, 0))) { overlay::triggerInjectPerks = true; }

                ImGui::InputText("Item ID", overlay::itemToGive, IM_ARRAYSIZE(overlay::itemToGive));
                if (ImGui::Button("Give Item", ImVec2(-1, 0))) { overlay::triggerGiveItem = true; }

                ImGui::Columns(1);
                ImGui::EndTabItem();
            }

            
            if (ImGui::BeginTabItem("Visuals")) {
                ImGui::Columns(2, "VisualsColumns", false);
                ImGui::SetColumnWidth(0, ImGui::GetWindowWidth() * 0.45f);

                // --- LEFT COLUMN: PLAYER & WORLD VISUALS ---
                ImGui::Checkbox("Enable ESP", &espEnabled);
                gui_helpers::Whisper("Master switch for all visual features.");
                ImGui::Separator();

                ImGui::SeparatorText("Player");
                ImGui::Checkbox("Full Box", &mainEspBoxEnabled);
                ImGui::Checkbox("Corner Box", &cornerEspBoxEnabled);
                ImGui::Checkbox("Skeleton", &boneEspEnabled);
                ImGui::Checkbox("Name", &nameEspEnabled);
                ImGui::Checkbox("Health Bar", &healthBarEnabled);
                ImGui::Checkbox("Distance", &distanceEspEnabled);
                ImGui::Checkbox("Snaplines", &snaplinesEnabled);

                ImGui::SeparatorText("World");
                ImGui::Checkbox("Pallets", &palletEspEnabled);
                ImGui::Checkbox("Windows", &windowEspEnabled);
                ImGui::Checkbox("Chests", &chestEspEnabled);
                ImGui::Checkbox("Totems", &totemEspEnabled);
                ImGui::Checkbox("Meat Hooks", &meatHookEspEnabled);
                ImGui::Checkbox("Exit Gates", &exitGateEspEnabled);
                ImGui::Checkbox("Hatch", &hatchEspEnabled);

                // --- RIGHT COLUMN: PREVIEW ---
                ImGui::NextColumn();
                ImGui::SeparatorText("Preview");
                ImGui::BeginChild("VisualsPreviewChild", ImVec2(0, 0), true, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
                {
                    // Preview call remains the same
                    gui_helpers::DrawVisualsPreview(
                        mainEspBoxEnabled, mainEspBoxColor,
                        cornerEspBoxEnabled, cornerEspBoxColor, cornerEspBoxThickness, cornerFraction,
                        boneEspEnabled, espOccludedColor,
                        nameEspEnabled, textEspColor,
                        healthBarEnabled, healthBarWidth, healthBarHighColor, healthBarMidColor, healthBarLowColor,
                        headDotEnabled, headDotRadius, headDotColor
                    );
                }
                ImGui::EndChild();
                ImGui::Columns(1);
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("World ESP")) {
                ImGui::Columns(2, "WorldESPColumns", false);
                ImGui::SeparatorText("Entities");
                ImGui::Checkbox("Gadget ESP", &gadgetEspEnabled);
                if (gadgetEspEnabled) { ImGui::Indent(); ImGui::Checkbox("Name##Gadget", &showGadgetName); ImGui::Checkbox("Distance##Gadget", &showGadgetDistance); ImGui::Unindent(); }
                ImGui::Checkbox("Vehicle ESP", &vehicleEspEnabled);
                if (vehicleEspEnabled) { ImGui::Indent(); ImGui::Checkbox("Name##Vehicle", &showVehicleName); ImGui::Checkbox("Distance##Vehicle", &showVehicleDistance); ImGui::Checkbox("Rider(s)", &showVehicleRider); ImGui::Unindent(); }
                ImGui::SeparatorText("Specific");
                ImGui::Checkbox("Killer ESP", &killerEspEnabled);
                ImGui::Checkbox("Survivor ESP", &survivorEspEnabled);
                ImGui::Checkbox("Zombie ESP", &zombieEspEnabled);
                ImGui::Checkbox("Generator ESP", &generatorEspEnabled);
                ImGui::Checkbox("Trap ESP", &trapEspEnabled);
                ImGui::NextColumn();
                ImGui::SeparatorText("Screen Overlays");
                ImGui::Checkbox("Line to Closest Enemy", &lineToClosestEnemyEnabled);
                ImGui::Checkbox("Enable Radar", &radarEnabled);
                if (radarEnabled) { ImGui::Text("  (Radar options would go here)"); }
                ImGui::Columns(1);
                ImGui::EndTabItem();
            }


            // In your draw_gui() function, inside the main TabBar

            if (ImGui::BeginTabItem("Exploits")) {
                ImGui::Columns(2, "ExploitsColumns", false);
                ImGui::SeparatorText("Teleport");
                ImGui::Text("Teleport Forward (F1 Hotkey)");
                if (ImGui::IsItemHovered()) ImGui::SetTooltip("Teleports you forward and attempts to disable collision to prevent rubber-banding.");
                ImGui::SliderFloat("Distance", &overlay::teleportDistance, 100.0f, 2000.0f, "%.0f cm");

                ImGui::EndTabItem();
            }

   

         
            if (ImGui::BeginTabItem("Auras")) {
                ImGui::TextWrapped("Force reveals the outlines of various objects, overriding game logic like blindness or stealth perks.");
                ImGui::Separator();
                ImGui::Spacing();

                ImGui::Checkbox("Enable Universal Auras", &overlay::forceShowAuras);
                gui_helpers::Whisper("Master switch for all forced aura features below.");
                ImGui::Separator();
                ImGui::Spacing();

                if (overlay::forceShowAuras) {
                    ImGui::Columns(2, "AuraColumns", false);

                    // Left Column
                    ImGui::SeparatorText("Players");
                    ImGui::Checkbox("Force Show Killer Aura", &forceShowKillerAura);
                    ImGui::Checkbox("Force Show Survivor Auras", &forceShowSurvivorAuras);
                    ImGui::Spacing();

                    ImGui::SeparatorText("Interactables");
                    ImGui::Checkbox("Force Show Generator Auras", &forceShowGeneratorAuras);
                    ImGui::Checkbox("Force Show Hook Auras", &forceShowHookAuras);
                    ImGui::Checkbox("Force Show Pallet Auras", &forceShowPalletAuras);
                    ImGui::Checkbox("Force Show Chest Auras", &forceShowChestAuras);

                    // Right Column
                    ImGui::NextColumn();
                    ImGui::SeparatorText("Objectives");
                    ImGui::Checkbox("Force Show Exit Gate Auras", &forceShowExitGateAuras);
                    ImGui::Checkbox("Force Show Hatch Auras", &forceShowHatchAuras);
                    ImGui::Checkbox("Force Show Totem Auras", &forceShowTotemAuras);
                    ImGui::Checkbox("Force Show Trap Auras", &forceShowTrapAuras);

                    ImGui::Columns(1);
                }

                ImGui::EndTabItem();
            }


            if (ImGui::BeginTabItem("Master Control")) {
                ImGui::TextWrapped("WARNING: These features directly call server/client functions and are for advanced testing. High risk of kicks or bans.");
                ImGui::Separator();

                ImGui::Columns(2, "MasterControlColumns", false);

                // --- LEFT COLUMN: PLAYER & MOVEMENT ---
                ImGui::SeparatorText("Player Cheats");
                if (ImGui::Button("Instant Heal Self", ImVec2(-1, 0))) { overlay::instantHealSelf = true; }
                if (ImGui::IsItemHovered()) ImGui::SetTooltip("Instantly heals you to the Healthy state. (Survivor only)");

                if (ImGui::Button("Instant Unhook Self", ImVec2(-1, 0))) { overlay::instantUnhookSelf = true; }
                if (ImGui::IsItemHovered()) ImGui::SetTooltip("Instantly lets you escape from any hook. (Survivor only)");

                ImGui::Spacing();
                ImGui::SeparatorText("Movement");
                ImGui::Checkbox("Flight & Noclip", &overlay::flightAndNoclip);
                if (ImGui::IsItemHovered()) ImGui::SetTooltip("Allows you to fly and pass through all objects.");

                ImGui::Checkbox("Server-Side Speed", &overlay::serverSideSpeed);
                if (overlay::serverSideSpeed) {
                    ImGui::SliderFloat("Speed Multiplier", &overlay::speedMultiplier, 1.1f, 5.0f, "x%.2f");
                }
                if (ImGui::IsItemHovered()) ImGui::SetTooltip("Combines a server request and local value change for speed.");

                ImGui::Spacing();
                ImGui::Text("Teleport Forward (F1 Hotkey)");
                if (ImGui::IsItemHovered()) ImGui::SetTooltip("Uses a server-side function to teleport you.");
                ImGui::SliderFloat("Teleport Distance", &overlay::teleportDistance, 100.f, 2000.f, "%.0f cm");

                // --- RIGHT COLUMN: WORLD & INTERACTION ---
                ImGui::NextColumn();
                ImGui::SeparatorText("Match Control");
                if (ImGui::Button("Complete All Generators", ImVec2(-1, 0))) { overlay::forceCompleteGenerators = true; }
                if (ImGui::Button("Open All Exit Gates", ImVec2(-1, 0))) { overlay::forceOpenGates = true; }

                ImGui::Spacing();
                ImGui::SeparatorText("Interaction");
                ImGui::Checkbox("Perfect Skill Checks", &overlay::perfectSkillChecksEnabled);
                if (ImGui::IsItemHovered()) ImGui::SetTooltip("Automatically hits every skill check perfectly.");

                ImGui::Checkbox("Instant Actions", &overlay::instantActionsEnabled);
                if (ImGui::IsItemHovered()) ImGui::SetTooltip("Dramatically speeds up chargeable actions like repairs and healing.");
                if (overlay::instantActionsEnabled) {
                    // CORRECTED: Using the correct namespace variable
                    ImGui::SliderFloat("Action Speed", &overlay::actionSpeedMultiplier, 2.f, 50.f, "x%.1f");
                }

                ImGui::Columns(1);
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("Colors")) {
                ImGui::Columns(2, "ColorColumns", false);

                // --- LEFT COLUMN ---
                ImGui::SeparatorText("ESP Base");
                ColorEdit3Float("Fallback Color", espColor, "General ESP color if not overridden.");
                ColorEdit4U32("Text Color", textEspColor, "Color for ESP text (Name, Distance, Health).");
                ColorEdit4U32("Friendly Color", friendlyEspColor);
                ColorEdit4U32("Enemy Color", enemyEspColor);
                ColorEdit4U32("Visible Color", espVisibleColor);
                ColorEdit4U32("Occluded Color", espOccludedColor);

                ImGui::SeparatorText("Health Bar");
                ColorEdit4U32("High Health", healthBarHighColor);
                ColorEdit4U32("Mid Health", healthBarMidColor);
                ColorEdit4U32("Low Health", healthBarLowColor);

                // --- RIGHT COLUMN ---
                ImGui::NextColumn();
                ImGui::SeparatorText("ESP Elements");
                ColorEdit3Float("Full Box", mainEspBoxColor);
                ColorEdit3Float("Corner Box", cornerEspBoxColor);
                ColorEdit4U32("Head Dot", headDotColor);
                ColorEdit4U32("Snapline", snaplineColor);
                ColorEdit4U32("Player Glow", glowColor, "Color for the player glow effect.");

                ImGui::SeparatorText("World & Misc");
                ColorEdit4ImColor("Weapon Chams", weaponChamsColorImGui);
                ColorEdit4U32("Gadget", gadgetEspColor);
                ColorEdit4U32("Vehicle", vehicleEspColor);
                ColorEdit4U32("FOV Circle", fovCircleColor);
                ColorEdit4U32("Line to Enemy", lineToEnemyColor);

                // --- NEW RAINBOW SECTION ---
                ImGui::Spacing();
                ImGui::SeparatorText("🌈 Rainbow Mode");
                ImGui::Checkbox("Enable Rainbow Mode", &overlay::rainbowModeEnabled);
                if (overlay::rainbowModeEnabled) {
                    ImGui::SliderFloat("Speed", &overlay::rainbowSpeed, 0.1f, 2.0f, "%.2f");
                }

                ImGui::Columns(1);
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("Misc")) {
                ImGui::Columns(2, "MiscColumns", false);
                ImGui::SeparatorText("Movement");
                ImGui::Checkbox("Bhop (Bunny Hop)", &bhopEnabled);
                ImGui::SeparatorText("World");
                ImGui::Checkbox("Teleport Items (DELETE)", &teleport);
                ImGui::NextColumn();
                ImGui::SeparatorText("Configuration");
                gui_helpers::Whisper("Save and load your menu settings to a file.");
                ImGui::Spacing();
                static char configFilename[128] = "default_config.json";
                ImGui::InputText("Filename", configFilename, IM_ARRAYSIZE(configFilename));
                float button_width = ImGui::GetContentRegionAvail().x;
                if (ImGui::Button("Save Config", ImVec2(button_width, 0))) { /* ... */ }
                if (ImGui::Button("Load Config", ImVec2(button_width, 0))) { /* ... */ }
                ImGui::Columns(1);
                ImGui::Separator();
                ImGui::Text("Hotkey Info: [Insert] toggles this menu.");
                ImGui::EndTabItem();
            }

            ImGui::EndTabBar();
        }

        ImGui::End();
    }
} // namespace overlay