#include "Config.h"
#include "../Overlay/overlay.h" // We need the actual definitions here
#include "../Utils/Logger.h"    // For logging messages
#include <json.hpp> // The JSON library
#include <fstream>           // For file input/output

// Use the nlohmann::json namespace for convenience
using json = nlohmann::json;

// Helper to safely get a value from a JSON object.
// If the key doesn't exist, it leaves the target variable unchanged.
template<typename T>
void safe_get(const json& j, const char* key, T& val) {
    if (j.contains(key) && !j.at(key).is_null()) {
        j.at(key).get_to(val);
    }
}

void Config::SaveConfig(const std::string& filename) {
    Utils::LogMessage("Saving config to %s...", filename.c_str());
    json j;

    try {
        // Aimbot & Triggerbot
        j["aimbot"]["enabled"] = overlay::aimbotEnabled;
     
        j["aimbot"]["key"] = overlay::aimbotKey;
        j["aimbot"]["fov"] = overlay::aimbotFov;
        j["aimbot"]["smoothness"] = overlay::aimbotSmoothness;

        j["esp"]["enabled"] = overlay::espEnabled;
        j["esp"]["main_box"] = overlay::mainEspBoxEnabled;
        j["esp"]["corner_box"] = overlay::cornerEspBoxEnabled;
        j["esp"]["bone_esp"] = overlay::boneEspEnabled;
        j["esp"]["name_esp"] = overlay::nameEspEnabled;
        j["esp"]["health_bar"] = overlay::healthBarEnabled;
        j["esp"]["health_text"] = overlay::healthTextEnabled;
        j["esp"]["distance_esp"] = overlay::distanceEspEnabled;
        j["esp"]["snaplines"] = overlay::snaplinesEnabled;
        j["esp"]["head_dot"] = overlay::headDotEnabled;

    


        j["esp_screen"]["fov_circle"] = overlay::fovCircleEnabled;
        j["esp_screen"]["line_to_enemy"] = overlay::lineToClosestEnemyEnabled;
        j["esp_screen"]["radar"] = overlay::radarEnabled;


       

        j["settings"]["health_bar_width"] = overlay::healthBarWidth;
        j["settings"]["head_dot_radius"] = overlay::headDotRadius;
        j["settings"]["corner_box_thickness"] = overlay::cornerEspBoxThickness;
        j["settings"]["main_box_thickness"] = overlay::mainEspBoxThickness;
        j["settings"]["corner_fraction"] = overlay::cornerFraction;

    
        j["colors"]["main_box"] = { overlay::mainEspBoxColor[0], overlay::mainEspBoxColor[1], overlay::mainEspBoxColor[2] };
        j["colors"]["corner_box"] = { overlay::cornerEspBoxColor[0], overlay::cornerEspBoxColor[1], overlay::cornerEspBoxColor[2] };
        j["colors"]["text"] = overlay::textEspColor;
        j["colors"]["snapline"] = overlay::snaplineColor;
        j["colors"]["head_dot"] = overlay::headDotColor;
        j["colors"]["line_to_enemy"] = overlay::lineToEnemyColor;
        j["colors"]["fov_circle"] = overlay::fovCircleColor;
        j["colors"]["gadget"] = overlay::gadgetEspColor;
        j["colors"]["health_high"] = overlay::healthBarHighColor;
        j["colors"]["health_mid"] = overlay::healthBarMidColor;
        j["colors"]["health_low"] = overlay::healthBarLowColor;
        j["colors"]["friendly"] = overlay::friendlyEspColor;
        j["colors"]["visible"] = overlay::espVisibleColor;
        j["colors"]["occluded"] = overlay::espOccludedColor;
   

  
        std::ofstream file(filename);
        if (file.is_open()) {
            file << j.dump(4); 
            file.close();
            Utils::LogMessage("Config save.");
        }
        else {
            Utils::LogMessage("Error  : %s", filename.c_str());
        }
    }
    catch (const json::exception& e) {
    }
}

void Config::LoadConfig(const std::string& filename) {

    std::ifstream file(filename);
    if (!file.is_open()) {
        return;
    }

    try {
        json j;
        file >> j;
        file.close();

        safe_get(j["aimbot"], "enabled", overlay::aimbotEnabled);
   
        safe_get(j["aimbot"], "key", overlay::aimbotKey);
        safe_get(j["aimbot"], "fov", overlay::aimbotFov);
        safe_get(j["aimbot"], "smoothness", overlay::aimbotSmoothness);

        safe_get(j["esp"], "enabled", overlay::espEnabled);
        safe_get(j["esp"], "main_box", overlay::mainEspBoxEnabled);
        safe_get(j["esp"], "corner_box", overlay::cornerEspBoxEnabled);
        safe_get(j["esp"], "bone_esp", overlay::boneEspEnabled);
        safe_get(j["esp"], "name_esp", overlay::nameEspEnabled);
        safe_get(j["esp"], "health_bar", overlay::healthBarEnabled);
        safe_get(j["esp"], "health_text", overlay::healthTextEnabled);
        safe_get(j["esp"], "distance_esp", overlay::distanceEspEnabled);
        safe_get(j["esp"], "snaplines", overlay::snaplinesEnabled);
        safe_get(j["esp"], "head_dot", overlay::headDotEnabled);

;

        safe_get(j["esp_screen"], "fov_circle", overlay::fovCircleEnabled);
        safe_get(j["esp_screen"], "line_to_enemy", overlay::lineToClosestEnemyEnabled);
        safe_get(j["esp_screen"], "radar", overlay::radarEnabled);

    
        safe_get(j["settings"], "health_bar_width", overlay::healthBarWidth);
        safe_get(j["settings"], "head_dot_radius", overlay::headDotRadius);
        safe_get(j["settings"], "corner_box_thickness", overlay::cornerEspBoxThickness);
        safe_get(j["settings"], "main_box_thickness", overlay::mainEspBoxThickness);
        safe_get(j["settings"], "corner_fraction", overlay::cornerFraction);

        // Load Colors
        safe_get(j["colors"], "text", overlay::textEspColor);
        safe_get(j["colors"], "snapline", overlay::snaplineColor);
        safe_get(j["colors"], "head_dot", overlay::headDotColor);
        safe_get(j["colors"], "line_to_enemy", overlay::lineToEnemyColor);
        safe_get(j["colors"], "fov_circle", overlay::fovCircleColor);
        safe_get(j["colors"], "gadget", overlay::gadgetEspColor);
        safe_get(j["colors"], "health_high", overlay::healthBarHighColor);
        safe_get(j["colors"], "health_mid", overlay::healthBarMidColor);
        safe_get(j["colors"], "health_low", overlay::healthBarLowColor);
        safe_get(j["colors"], "friendly", overlay::friendlyEspColor);
        safe_get(j["colors"], "visible", overlay::espVisibleColor);
        safe_get(j["colors"], "occluded", overlay::espOccludedColor);

        if (j.contains("colors")) {
            auto colors_j = j["colors"];
            if (colors_j.contains("main_box") && colors_j["main_box"].is_array() && colors_j["main_box"].size() == 3) {
                colors_j["main_box"].get_to(overlay::mainEspBoxColor);
            }
            if (colors_j.contains("corner_box") && colors_j["corner_box"].is_array() && colors_j["corner_box"].size() == 3) {
                colors_j["corner_box"].get_to(overlay::cornerEspBoxColor);
            }
          
        }

       Utils::LogMessage(" loaded sducces.");
    }
    catch (const json::exception& e) {
       Utils::LogMessage("Error laod: %s", e.what());
    }
}