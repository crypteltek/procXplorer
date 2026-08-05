#include <string>
#include <windows.h>
#include <iostream>
#include "../Utils.h"




std::string WStringToString(const wchar_t* wstr)
{
    if (!wstr)
    {
        return "";
    }

    int size_needed = WideCharToMultiByte(CP_UTF8, 0, wstr, -1, NULL, 0, NULL, NULL);
    std::string strTo(size_needed - 1, 0);

    WideCharToMultiByte(CP_UTF8, 0, wstr, -1, &strTo[0], size_needed, NULL, NULL);

    return strTo;
}

std::string IntToString(int value)
{
    std::string strVal = std::to_string(value);
    return strVal;
}

