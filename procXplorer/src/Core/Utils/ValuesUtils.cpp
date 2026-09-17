#include <string>
#include <windows.h>

#include "Utils.h"

ULONGLONG FileTimeToUint64(const FILETIME& ft)
{
    ULARGE_INTEGER uli;
    uli.LowPart = ft.dwLowDateTime;
    uli.HighPart = ft.dwHighDateTime;
    return uli.QuadPart;
}