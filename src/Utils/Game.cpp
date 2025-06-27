#include "Game.h"
#include "Logger.h"
#include "../Features/Memory.h" 


// to init all pointers 
bool Game::InitializeGameComponents() {
    uintptr_t base = SDK::InSDKUtils::GetImageBase();
    if (!base) {
        return false;
    }

    uintptr_t worldAddress;
    if (!Memory::SafeRead<uintptr_t>(base + SDK::Offsets::GWorld, worldAddress) || !worldAddress) {
        World = nullptr;
        return false;
    }
    World = reinterpret_cast<SDK::UWorld*>(worldAddress);

    SDK::UGameInstance* tempGameInstance;
    if (!Memory::SafeRead<SDK::UGameInstance*>(reinterpret_cast<uintptr_t>(&World->OwningGameInstance), tempGameInstance) || !tempGameInstance) {
        GameInstance = nullptr;
        return false;
    }
    GameInstance = tempGameInstance;


    uintptr_t localPlayersArrayAddr = reinterpret_cast<uintptr_t>(&GameInstance->LocalPlayers);
    int localPlayerCount;
    SDK::ULocalPlayer** localPlayersData;

    if (!Memory::SafeRead<SDK::ULocalPlayer**>(localPlayersArrayAddr, localPlayersData) ||                  
        !Memory::SafeRead<int>(localPlayersArrayAddr + sizeof(void*), localPlayerCount) || 
        localPlayerCount == 0 || !localPlayersData) {
        LocalPlayer = nullptr;
        return false;
    }

    SDK::ULocalPlayer* tempLocalPlayer;
    if (!Memory::SafeRead<SDK::ULocalPlayer*>(reinterpret_cast<uintptr_t>(localPlayersData), tempLocalPlayer) || !tempLocalPlayer) {
        LocalPlayer = nullptr;
        return false;
    }
    LocalPlayer = tempLocalPlayer;

    SDK::ADBDPlayerControllerBase* tempController;
    if (!Memory::SafeRead<SDK::ADBDPlayerControllerBase*>(reinterpret_cast<uintptr_t>(&LocalPlayer->PlayerController), tempController) || !tempController) {
        Controller = nullptr;
        return false;
    }
    Controller = tempController;

    Player = Controller->K2_GetPawn();
    if (!Player) {
        return false;
    }

    GameplayStatics = reinterpret_cast<SDK::UGameplayStatics*>(SDK::UGameplayStatics::StaticClass());
    if (!GameplayStatics) {
        return false;
    }

    GameState = static_cast<SDK::ADBDGameState*>(World->GameState); 
    if (!GameState) {
        return false;
    }
    return true;
}

SDK::FName Game::ToName(const std::string& str) {
    std::wstring wstr(str.begin(), str.end());
    return SDK::UKismetStringLibrary::Conv_StringToName(SDK::FString(wstr.c_str()));
}