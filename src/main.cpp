
#include "Overlay/overlay.h"


#define NOMINMAX
#define WIN32_LEAN_AND_MEAN 
#include <Windows.h>

static bool bOverlayRunning = true;


DWORD WINAPI MainThread(LPVOID lpParam) {

    overlay::render(&bOverlayRunning); 

    return 0;
}



//gets called from the injecter anyways hiajcks teh thread of the game proccc3esds
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    static HANDLE hThread = nullptr;

    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        hThread = CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
        if (!hThread) {
        
            return FALSE; 
        }
        break;
    case DLL_PROCESS_DETACH:
        bOverlayRunning = false;

        if (hThread) {
            if (WaitForSingleObject(hThread, 3000) == WAIT_TIMEOUT) { 
            }
            CloseHandle(hThread);
            hThread = nullptr;
        }
        break;
    }
    return TRUE;
}