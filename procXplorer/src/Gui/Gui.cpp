#include <windows.h>
#include <d3d11.h>
#include <tchar.h>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"

#include "Gui.h"
#include "../Core/Usermode/Scylla/Scylla.h"
#include "../Core/Usermode/Processes/Processes.h"

#pragma comment(lib, "d3d11.lib")

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);




int GuiRender()
{
    WNDCLASSEXW wc = {
        sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L,
        GetModuleHandle(nullptr), nullptr, nullptr, nullptr, nullptr,
        L"procXplorerWnd", nullptr
    };
    RegisterClassExW(&wc);

    HWND hwnd = CreateWindowW(
        wc.lpszClassName,
        L"procXplorer v0.1 Alpha",
        WS_OVERLAPPEDWINDOW,
        100, 100, 1400, 900,
        nullptr, nullptr, wc.hInstance, nullptr
    );

    if (!CreateDeviceD3D(hwnd))
    {
        CleanupDeviceD3D();
        UnregisterClassW(wc.lpszClassName, wc.hInstance);
        return 1;
    }

    ShowWindow(hwnd, SW_SHOWDEFAULT);
    UpdateWindow(hwnd);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

    ImGui::StyleColorsDark();
    ImGuiStyle& style = ImGui::GetStyle();
    style.WindowRounding = 0.0f;
    style.ChildRounding = 0.0f;
    style.FrameRounding = 2.0f;
    style.GrabRounding = 2.0f;
    style.TabRounding = 2.0f;
    style.ScrollbarRounding = 2.0f;
    style.WindowPadding = ImVec2(8, 8);
    style.FramePadding = ImVec2(4, 3);
    style.ItemSpacing = ImVec2(8, 4);

    ImVec4* colors = style.Colors;
    colors[ImGuiCol_WindowBg] = ImVec4(0.13f, 0.13f, 0.13f, 1.00f);
    colors[ImGuiCol_ChildBg] = ImVec4(0.15f, 0.15f, 0.15f, 1.00f);
    colors[ImGuiCol_Border] = ImVec4(0.25f, 0.25f, 0.27f, 1.00f);
    colors[ImGuiCol_FrameBg] = ImVec4(0.18f, 0.18f, 0.18f, 1.00f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.25f, 0.25f, 0.25f, 1.00f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.30f, 0.30f, 0.30f, 1.00f);
    colors[ImGuiCol_TitleBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.15f, 0.15f, 0.15f, 1.00f);
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.22f, 0.27f, 0.32f, 1.00f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.28f, 0.35f, 0.42f, 1.00f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.25f, 0.31f, 0.37f, 1.00f);
    colors[ImGuiCol_Tab] = ImVec4(0.18f, 0.18f, 0.18f, 1.00f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.28f, 0.35f, 0.42f, 1.00f);
    colors[ImGuiCol_TabActive] = ImVec4(0.22f, 0.27f, 0.32f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.20f, 0.25f, 0.30f, 1.00f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.28f, 0.35f, 0.42f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.15f, 0.20f, 0.25f, 1.00f);

    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(g_Device, g_Context);

    processes = GetProcesses();
    int selectedProcess = -1;
    bool running = true;

    bool autoRefreshEnabled = true;
    float refreshInterval = 0.4f;
    float timeSinceLastRefresh = 0.0f;
    LARGE_INTEGER frequency, lastTime, currentTime;
    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&lastTime);

    int currentSortColumn = -1;
    ImGuiSortDirection currentSortDirection = ImGuiSortDirection_None;

    while (running)
    {
        MSG msg;
        while (PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            if (msg.message == WM_QUIT)
                running = false;
        }

        if (!running)
            break;

        QueryPerformanceCounter(&currentTime);
        float deltaTime = (float)(currentTime.QuadPart - lastTime.QuadPart) / frequency.QuadPart;
        lastTime = currentTime;

        if (autoRefreshEnabled)
        {
            timeSinceLastRefresh += deltaTime;
            if (timeSinceLastRefresh >= refreshInterval)
            {
                processes = GetProcesses();

                if (currentSortColumn != -1)
                {
                    std::sort(processes.begin(), processes.end(), [&](const ProcessInfo& a, const ProcessInfo& b)
                        {
                            int delta = 0;

                            switch (currentSortColumn)
                            {
                            case 0: delta = a.pid - b.pid; break;
                            case 1: delta = a.name.compare(b.name); break;
                            case 2: delta = a.user.compare(b.user); break;
                            case 3: delta = (a.cpu > b.cpu) ? 1 : (a.cpu < b.cpu) ? -1 : 0; break;
                            case 4: delta = (a.memory > b.memory) ? 1 : (a.memory < b.memory) ? -1 : 0; break;
                            case 5: delta = a.status.compare(b.status); break;
                            case 6: delta = (a.admin ? 1 : 0) - (b.admin ? 1 : 0); break;
                            case 7: delta = a.startTime.compare(b.startTime); break;
                            case 8: delta = a.windowTitle.compare(b.windowTitle); break;
                            }

                            return (currentSortDirection == ImGuiSortDirection_Ascending) ? (delta < 0) : (delta > 0);
                        });
                }

                timeSinceLastRefresh = 0.0f;
            }
        }

        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

        ImGui::SetNextWindowPos(ImVec2(0, 0));
        ImGui::SetNextWindowSize(io.DisplaySize);
        ImGui::Begin("##MainWindow", nullptr,
            ImGuiWindowFlags_NoDecoration |
            ImGuiWindowFlags_NoMove |
            ImGuiWindowFlags_NoResize |
            ImGuiWindowFlags_NoSavedSettings |
            ImGuiWindowFlags_NoBringToFrontOnFocus |
            ImGuiWindowFlags_MenuBar);

        if (ImGui::BeginMenuBar())
        {
            if (ImGui::BeginMenu("File"))
            {
                if (ImGui::MenuItem("Run new task", "Ctrl+R")) {}
                ImGui::Separator();
                if (ImGui::MenuItem("Exit", "Alt+F4")) { running = false; }
                ImGui::EndMenu();
            }
            if (ImGui::BeginMenu("View"))
            {
                if (ImGui::MenuItem("Manual Refresh", "F5")) {
                    processes = GetProcesses();

                    if (currentSortColumn != -1)
                    {
                        std::sort(processes.begin(), processes.end(), [&](const ProcessInfo& a, const ProcessInfo& b)
                            {
                                int delta = 0;

                                switch (currentSortColumn)
                                {
                                case 0: delta = a.pid - b.pid; break;
                                case 1: delta = a.name.compare(b.name); break;
                                case 2: delta = a.user.compare(b.user); break;
                                case 3: delta = (a.cpu > b.cpu) ? 1 : (a.cpu < b.cpu) ? -1 : 0; break;
                                case 4: delta = (a.memory > b.memory) ? 1 : (a.memory < b.memory) ? -1 : 0; break;
                                case 5: delta = a.status.compare(b.status); break;
                                case 6: delta = (a.admin ? 1 : 0) - (b.admin ? 1 : 0); break;
                                case 7: delta = a.startTime.compare(b.startTime); break;
                                case 8: delta = a.windowTitle.compare(b.windowTitle); break;
                                }

                                return (currentSortDirection == ImGuiSortDirection_Ascending) ? (delta < 0) : (delta > 0);
                            });
                    }

                    timeSinceLastRefresh = 0.0f;
                }
                if (ImGui::MenuItem("Refresh Automaticly", "F6", &autoRefreshEnabled)) {
                    timeSinceLastRefresh = 0.0f;
                }
                if (autoRefreshEnabled)
                {
                    ImGui::Separator();
                    ImGui::Text("Refresh Interval:");
                    ImGui::SliderFloat("##RefreshInterval", &refreshInterval, 0.01f, 10.0f, "%.1f sec");
                }
                ImGui::EndMenu();
            }
            if (ImGui::BeginMenu("Tools"))
            {
                if (ImGui::MenuItem("Scylla"))
                {
                    if (!IsScyllaOnDisk())
                    {
                        int installscylla = MessageBox(
                            NULL,
                            L"Scylla not found on disk do you wish to install it?",
                            L"Question",
                            MB_YESNO | MB_ICONQUESTION
                        );
                        if (installscylla == IDYES)
                        {
                            CreateScyllaFiles();
                        }
                    }
                    if (IsScyllaOnDisk())
                    {
                        OpenScylla();
                    }
                }


                if (ImGui::MenuItem("System Information")) {}
                if (ImGui::MenuItem("Performance Monitor")) {}
                ImGui::EndMenu();
            }
            if (ImGui::BeginMenu("Help"))
            {
                if (ImGui::MenuItem("About")) {}
                ImGui::EndMenu();
            }
            ImGui::EndMenuBar();
        }

        ImGui::BeginChild("ToolbarArea", ImVec2(0, 35), true);
        if (ImGui::Button("End Process"))
        {
            if (selectedProcess >= 0)
                if (!EndProcess(processes[selectedProcess].pid))
                {
                    int forceend = MessageBox(
                        NULL,
                        L"Failed to terminate process would you like to try forcekill?",
                        L"Question",
                        MB_YESNO | MB_ICONQUESTION
                    );
                    if (forceend == IDYES)
                    {
                        ForceEndProcess(processes[selectedProcess].pid);
                    }
                }
            printf("Ending process: %s\n", processes[selectedProcess].name.c_str());
        }
        ImGui::SameLine();
        if (ImGui::Button("Manual Refresh")) {
            processes = GetProcesses();

            if (currentSortColumn != -1)
            {
                std::sort(processes.begin(), processes.end(), [&](const ProcessInfo& a, const ProcessInfo& b)
                    {
                        int delta = 0;

                        switch (currentSortColumn)
                        {
                        case 0: delta = a.pid - b.pid; break;
                        case 1: delta = a.name.compare(b.name); break;
                        case 2: delta = a.user.compare(b.user); break;
                        case 3: delta = (a.cpu > b.cpu) ? 1 : (a.cpu < b.cpu) ? -1 : 0; break;
                        case 4: delta = (a.memory > b.memory) ? 1 : (a.memory < b.memory) ? -1 : 0; break;
                        case 5: delta = a.status.compare(b.status); break;
                        case 6: delta = (a.admin ? 1 : 0) - (b.admin ? 1 : 0); break;
                        case 7: delta = a.startTime.compare(b.startTime); break;
                        case 8: delta = a.windowTitle.compare(b.windowTitle); break;
                        }

                        return (currentSortDirection == ImGuiSortDirection_Ascending) ? (delta < 0) : (delta > 0);
                    });
            }

            timeSinceLastRefresh = 0.0f;
        }
        ImGui::SameLine();
        ImGui::Text("|");
        ImGui::SameLine();
        if (ImGui::Button("Properties"))
        {
            if (selectedProcess >= 0)
                printf("Properties for: %s\n", processes[selectedProcess].name.c_str());
        }
        ImGui::SameLine();

        ImGui::EndChild();

        if (ImGui::BeginTabBar("MainTabs", ImGuiTabBarFlags_None))
        {
            if (ImGui::BeginTabItem("Processes"))
            {
                ImGui::BeginChild("ProcessList", ImVec2(0, -250), true);

                if (ImGui::BeginTable("ProcessTable", 9,
                    ImGuiTableFlags_Borders |
                    ImGuiTableFlags_RowBg |
                    ImGuiTableFlags_Resizable |
                    ImGuiTableFlags_Sortable |
                    ImGuiTableFlags_ScrollY))
                {
                    ImGui::TableSetupColumn("PID", ImGuiTableColumnFlags_WidthFixed, 80.0f);
                    ImGui::TableSetupColumn("Name", ImGuiTableColumnFlags_WidthStretch);
                    ImGui::TableSetupColumn("User", ImGuiTableColumnFlags_WidthFixed, 120.0f);
                    ImGui::TableSetupColumn("CPU %", ImGuiTableColumnFlags_WidthFixed, 80.0f);
                    ImGui::TableSetupColumn("Memory (MB)", ImGuiTableColumnFlags_WidthFixed, 100.0f);
                    ImGui::TableSetupColumn("Status", ImGuiTableColumnFlags_WidthFixed, 100.0f);
                    ImGui::TableSetupColumn("Is Admin", ImGuiTableColumnFlags_WidthFixed, 100.0f);
                    ImGui::TableSetupColumn("Launch Time", ImGuiTableColumnFlags_WidthFixed, 140.0f);
                    ImGui::TableSetupColumn("Windows Title", ImGuiTableColumnFlags_WidthFixed, 250.0f);
                    ImGui::TableHeadersRow();

                    if (ImGuiTableSortSpecs* specs = ImGui::TableGetSortSpecs())
                    {
                        if (specs->SpecsDirty)
                        {
                            currentSortColumn = specs->Specs[0].ColumnIndex;
                            currentSortDirection = specs->Specs[0].SortDirection;

                            if (processes.size() > 1)
                            {
                                std::sort(processes.begin(), processes.end(), [&](const ProcessInfo& a, const ProcessInfo& b)
                                    {
                                        int delta = 0;

                                        switch (currentSortColumn)
                                        {
                                        case 0: delta = a.pid - b.pid; break;
                                        case 1: delta = a.name.compare(b.name); break;
                                        case 2: delta = a.user.compare(b.user); break;
                                        case 3: delta = (a.cpu > b.cpu) ? 1 : (a.cpu < b.cpu) ? -1 : 0; break;
                                        case 4: delta = (a.memory > b.memory) ? 1 : (a.memory < b.memory) ? -1 : 0; break;
                                        case 5: delta = a.status.compare(b.status); break;
                                        case 6: delta = (a.admin ? 1 : 0) - (b.admin ? 1 : 0); break;
                                        case 7: delta = a.startTime.compare(b.startTime); break;
                                        case 8: delta = a.windowTitle.compare(b.windowTitle); break;
                                        }

                                        return (currentSortDirection == ImGuiSortDirection_Ascending) ? (delta < 0) : (delta > 0);
                                    });
                            }
                            specs->SpecsDirty = false;
                        }
                    }

                    for (int i = 0; i < processes.size(); i++)
                    {
                        ImGui::TableNextRow();

                        bool isSelected = (selectedProcess == i);
                        ImGui::TableSetColumnIndex(0);
                        if (ImGui::Selectable(std::to_string(processes[i].pid).c_str(),
                            isSelected,
                            ImGuiSelectableFlags_SpanAllColumns))
                        {
                            selectedProcess = i;
                        }

                        ImGui::TableSetColumnIndex(1);
                        ImGui::Text("%s", processes[i].name.c_str());

                        ImGui::TableSetColumnIndex(2);
                        ImGui::Text("%s", processes[i].user.c_str());

                        ImGui::TableSetColumnIndex(3);
                        ImGui::Text("%.1f", processes[i].cpu);

                        ImGui::TableSetColumnIndex(4);
                        ImGui::Text("%.1f", processes[i].memory);

                        ImGui::TableSetColumnIndex(5);
                        ImGui::Text("%s", processes[i].status.c_str());


                        ImGui::TableSetColumnIndex(6);
                        ImGui::Text("%s", processes[i].admin ? "Yes" : "No");


                        ImGui::TableSetColumnIndex(7);
                        ImGui::Text("%s", processes[i].startTime.c_str());


                        ImGui::TableSetColumnIndex(8);
                        ImGui::Text("%s", processes[i].windowTitle.c_str());



                    }

                    ImGui::EndTable();
                }
                ImGui::EndChild();

                ImGui::BeginChild("DetailsPanel", ImVec2(0, 0), true);
                ImGui::Text("Process Details");
                ImGui::Separator();
                if (selectedProcess >= 0)
                {
                    const ProcessInfo& proc = processes[selectedProcess];
                    ImGui::Text("PID: %d", proc.pid);
                    ImGui::Text("Name: %s", proc.name.c_str());
                    ImGui::Text("User: %s", proc.user.c_str());
                    ImGui::Text("CPU Usage: %.1f%%", proc.cpu);
                    ImGui::Text("Memory: %.1f MB", proc.memory);
                    ImGui::Text("Status: %s", proc.status.c_str());
                    ImGui::Text("Is Admin: %s", proc.admin ? "Yes" : "No");
                    ImGui::Text("\n\n\n\n");
                }
                else
                {
                    ImGui::TextDisabled("Select a process to view details");
                }
                ImGui::EndChild();

                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("Performance"))
            {
                ImGui::Text("Performance graphs will go here");
                ImGui::Text("CPU, Memory, Disk, Network usage over time");
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("Services"))
            {
                ImGui::Text("Windows Services list will go here");
                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("Network"))
            {
                ImGui::Text("Network connections will go here");
                ImGui::EndTabItem();
            }

            ImGui::EndTabBar();
        }

        ImGui::SetCursorPos(ImVec2(10.0f, io.DisplaySize.y - 25.0f));
        ImGui::Text("Processes: %d | CPU: 12.5%% | Memory: 45.2%% | FPS: %.1f",
            (int)processes.size(), io.Framerate);

        ImGui::End();

        ImGui::Render();
        const float clearColor[4] = { 0.10f, 0.10f, 0.10f, 1.00f };
        g_Context->OMSetRenderTargets(1, &g_RTV, nullptr);
        g_Context->ClearRenderTargetView(g_RTV, clearColor);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

        g_SwapChain->Present(1, 0);
    }

    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    CleanupDeviceD3D();
    DestroyWindow(hwnd);
    UnregisterClassW(wc.lpszClassName, wc.hInstance);

    return 0;
}

bool CreateDeviceD3D(HWND hWnd)
{
    DXGI_SWAP_CHAIN_DESC sd = {};
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0 };

    HRESULT hr = D3D11CreateDeviceAndSwapChain(
        nullptr,
        D3D_DRIVER_TYPE_HARDWARE,
        nullptr,
        0,
        featureLevelArray,
        2,
        D3D11_SDK_VERSION,
        &sd,
        &g_SwapChain,
        &g_Device,
        &featureLevel,
        &g_Context
    );

    if (hr != S_OK)
        return false;

    CreateRenderTarget();
    return true;
}

void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_SwapChain) { g_SwapChain->Release(); g_SwapChain = nullptr; }
    if (g_Context) { g_Context->Release(); g_Context = nullptr; }
    if (g_Device) { g_Device->Release(); g_Device = nullptr; }
}

void CreateRenderTarget()
{
    ID3D11Texture2D* pBackBuffer = nullptr;
    g_SwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    if (pBackBuffer)
    {
        g_Device->CreateRenderTargetView(pBackBuffer, nullptr, &g_RTV);
        pBackBuffer->Release();
    }
}

void CleanupRenderTarget()
{
    if (g_RTV)
    {
        g_RTV->Release();
        g_RTV = nullptr;
    }
}

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_SIZE:
        if (g_Device != nullptr && wParam != SIZE_MINIMIZED)
        {
            CleanupRenderTarget();
            g_SwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            CreateRenderTarget();
        }
        return 0;

    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU)
            return 0;
        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }

    return DefWindowProc(hWnd, msg, wParam, lParam);
}