#define _CRT_SECURE_NO_WARNINGS

#include "overlay.h"
#include "../Features/Exploits.h"

#include <imgui.h>
#include <imgui_impl_dx11.h>
#include <imgui_impl_win32.h>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include "../Features/ESP.h"  
#include "../Features/Aimbot.h"   
#include "../Utils/Logger.h" 
#include <dwmapi.h>
#include "../Utils/Game.h"
#include <d3d11.h>      
#include <dxgi.h>       
#pragma comment(lib, "d3d11.lib") 




static ID3D11Device* g_pd3dDevice = nullptr;
static ID3D11DeviceContext* g_pd3dDeviceContext = nullptr;
static IDXGISwapChain* g_pSwapChain = nullptr;
static UINT g_ResizeWidth = 0, g_ResizeHeight = 0;
static ID3D11RenderTargetView* g_mainRenderTargetView = nullptr;

bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);



std::wstring GenerateRandomWideString(size_t length) {
    const std::wstring charset = L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    std::wstring result;
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(0, charset.length() - 1);

    std::generate_n(std::back_inserter(result), length, [&]() {
        return charset[distribution(generator)];
        });
    return result;
}


// overlay can hijack it better this way since we hoook
void overlay::render(bool* pRunning)
{
    std::wstring randomClassName = L"APCRECORDER_CLASS_" + GenerateRandomWideString(10);
    std::wstring randomWindowTitle = L"ApcRecorder_Window_" + GenerateRandomWideString(10);

    WNDCLASSEXW wc = { sizeof(wc), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(nullptr), nullptr, nullptr, nullptr, nullptr, randomClassName.c_str(), nullptr };
    ::RegisterClassExW(&wc);

    HWND hwnd = ::CreateWindowExW(
        WS_EX_TOPMOST | WS_EX_LAYERED | WS_EX_TOOLWINDOW, //TOPMost Kernel driver hides hooks 
        wc.lpszClassName, randomWindowTitle.c_str(), WS_POPUP,
        0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN),
        nullptr, nullptr, wc.hInstance, nullptr
    );

    if (!hwnd) {
        ::UnregisterClassW(wc.lpszClassName, wc.hInstance);
        if (pRunning) *pRunning = false;
        return;
    }

    SetLayeredWindowAttributes(hwnd, RGB(0, 0, 0), 255, LWA_ALPHA);
    MARGINS margin = { -1 };
    DwmExtendFrameIntoClientArea(hwnd, &margin);

    if (!CreateDeviceD3D(hwnd)) {
        CleanupDeviceD3D();
        ::DestroyWindow(hwnd);
        ::UnregisterClassW(wc.lpszClassName, wc.hInstance);
        if (pRunning) *pRunning = false;
        return;
    }

    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::UpdateWindow(hwnd);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();

    InitializeColors();

    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    io.IniFilename = nullptr; 

    ImGui::StyleColorsDark();

    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);

    ImVec4 clear_color = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);

    bool lastKeyState = false;
    DWORD lastToggleTime = 0;
    const DWORD toggleCooldown = 200;

    bool done = false;
    while (!done && (pRunning ? *pRunning : true)) {
        MSG msg;
        while (::PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE)) {
            ::TranslateMessage(&msg);
            ::DispatchMessage(&msg);
            if (msg.message == WM_QUIT) {
                done = true;
            }
        }
        if (done) break;

        bool keyStateNow = (GetAsyncKeyState(VK_INSERT) & 0x8000) != 0;
        DWORD currentTime = GetTickCount();
        if (keyStateNow && !lastKeyState && (currentTime - lastToggleTime > toggleCooldown)) {
            overlay::enabled = !overlay::enabled;
            lastToggleTime = currentTime;
        }
        lastKeyState = keyStateNow;

        
        LONG currentExStyle = GetWindowLongPtr(hwnd, GWL_EXSTYLE);
        LONG newExStyle = currentExStyle;
        BYTE targetAlpha = 255; 

        if (overlay::enabled) {
            newExStyle &= ~WS_EX_TRANSPARENT; 
            targetAlpha = 255;
        }
        else {
            newExStyle |= WS_EX_TRANSPARENT; 
            if (overlay::espEnabled) {
                targetAlpha = 255; 
            }
            else {
                targetAlpha = 0; 
            }
        }

        if (newExStyle != currentExStyle) {
            SetWindowLongPtr(hwnd, GWL_EXSTYLE, newExStyle);
        }
        SetLayeredWindowAttributes(hwnd, RGB(0, 0, 0), targetAlpha, LWA_ALPHA);

        if (g_ResizeWidth != 0 && g_ResizeHeight != 0) {
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, g_ResizeWidth, g_ResizeHeight, DXGI_FORMAT_UNKNOWN, 0);
            g_ResizeWidth = g_ResizeHeight = 0;
            CreateRenderTarget();
        }

        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

      
        bool gameComponentsValid = Game::InitializeGameComponents();

   //     Exploits::Run();

        if (overlay::enabled) {
            overlay::draw_gui();
        }

        
        if (gameComponentsValid) {
            if (overlay::espEnabled && targetAlpha > 0) {
                ESP::RenderESP(ImGui::GetBackgroundDrawList());

            }

            if (overlay::aimbotEnabled) {
                Aimbot::RunAimbot();
            }
        }
        else {
            Aimbot::Target = nullptr;
        }

        ImGui::Render();
        const float final_clear_color[4] = { clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w };
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, nullptr);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, final_clear_color);

        if (targetAlpha > 0 && ImGui::GetDrawData()->TotalVtxCount > 0) {
            ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
        }



        g_pSwapChain->Present(1, 0); // this for the vsnyc depednant
    }


    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    CleanupDeviceD3D();
    ::DestroyWindow(hwnd);
    ::UnregisterClassW(wc.lpszClassName, wc.hInstance);
}



bool CreateDeviceD3D(HWND hWnd) {
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;
#ifdef _DEBUG
   
#endif

    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    HRESULT res = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext);
    if (res == DXGI_ERROR_UNSUPPORTED) {
        res = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_WARP, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext);
    }
    if (res != S_OK) {
        return false;
    }
    CreateRenderTarget();
    return true;
}

void CleanupDeviceD3D() {
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = nullptr; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = nullptr; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = nullptr; }
}

void CreateRenderTarget() {
    ID3D11Texture2D* pBackBuffer = nullptr;
    HRESULT hr = g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    if (SUCCEEDED(hr) && pBackBuffer) {
        g_pd3dDevice->CreateRenderTargetView(pBackBuffer, nullptr, &g_mainRenderTargetView);
        pBackBuffer->Release();
    }
    else {
        if (pBackBuffer) pBackBuffer->Release();
    }
}

void CleanupRenderTarget() {
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = nullptr; }
}

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam) && ImGui::GetIO().WantCaptureMouse)
        return true;

    switch (msg) {
    case WM_SIZE:
        if (g_pd3dDevice != nullptr && wParam != SIZE_MINIMIZED) {
            g_ResizeWidth = (UINT)LOWORD(lParam);
            g_ResizeHeight = (UINT)HIWORD(lParam);
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU)
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProcW(hWnd, msg, wParam, lParam);
}