#include <windows.h>
#include <d3d11.h>
#include <tchar.h>
#include <cstdio>  // for printf

#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"

#pragma comment(lib, "d3d11.lib")

#include "Gui/Gui.h"

int main()
{
	GuiRender();
}