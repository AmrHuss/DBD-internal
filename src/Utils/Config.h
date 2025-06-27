#pragma once
#include "../SDK.hpp" 
#pragma once
#include <string>

namespace overlay {}

class Config {
public:
    static void SaveConfig(const std::string& filename);

    static void LoadConfig(const std::string& filename);
};