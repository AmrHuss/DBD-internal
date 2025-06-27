#pragma once
#include "../SDK.hpp" 


namespace Game {
    inline SDK::UWorld* World = nullptr;
    inline SDK::ADBDPlayerControllerBase* Controller = nullptr;
    inline SDK::APawn* Player = nullptr; 
    inline SDK::UGameInstance* GameInstance = nullptr;
    inline SDK::ULocalPlayer* LocalPlayer = nullptr;
    inline SDK::UGameViewportClient* ViewportClient = nullptr;
    inline SDK::UGameplayStatics* GameplayStatics = nullptr; 
    inline SDK::ADBDGameState* GameState = nullptr; 

    bool InitializeGameComponents();

    SDK::FName ToName(const std::string& str);
}