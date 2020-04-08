#include <windows.h>

#define ES_CONTINUOUS       0x80000000
#define ES_DISPLAY_REQUIRED 0x00000002
#define ES_SYSTEM_REQUIRED  0x00000001

int main()
{
    int result = 0;
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_MINIMIZE);
    ShowWindow(hWnd, SW_HIDE);
    while(1)
    {
        result = SetThreadExecutionState(ES_SYSTEM_REQUIRED | ES_DISPLAY_REQUIRED | ES_CONTINUOUS);
        Sleep(20 * 1000);
    }
    return 0;
}
