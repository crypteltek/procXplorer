#include <string>
#include <windows.h>

#include "Utils.h"

// Helper: Converts WCHAR[] to std::string (UTF-8)
std::string WideToNarrow(const wchar_t* wstr)
{
    if (!wstr || !*wstr)
    {
        return "";
    }

    int sizeNeeded = WideCharToMultiByte(CP_UTF8, 0, wstr, -1, nullptr, 0, nullptr, nullptr);
    if (sizeNeeded <= 0)
    {
        return "";
    }

    std::string str(sizeNeeded - 1, 0); // exclude null-terminator
    WideCharToMultiByte(CP_UTF8, 0, wstr, -1, &str[0], sizeNeeded, nullptr, nullptr);
    return str;
}


std::wstring NarrowToWide(const std::string& str)
{
    if (str.empty())
    {
        return L"";
    }

    int sizeNeeded = MultiByteToWideChar(CP_UTF8, 0, str.data(), static_cast<int>(str.length()), nullptr, 0);

    if (sizeNeeded <= 0)
    {
        return L"";
    }

    std::wstring wstr(sizeNeeded, 0);
    MultiByteToWideChar(CP_UTF8, 0, str.data(), static_cast<int>(str.length()), &wstr[0], sizeNeeded);

    return wstr;
}