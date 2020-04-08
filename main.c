// credit: https://superuser.com/revisions/1530942/3
#include <windows.h>

#define ES_CONTINUOUS       0x80000000
#define ES_DISPLAY_REQUIRED 0x00000002
#define ES_SYSTEM_REQUIRED  0x00000001

int main()
{
    int result = 0;
    
    // Hide from the task bar
    HWND hWnd = GetConsoleWindow();
    
    // Window needs to be minimised first
    ShowWindow(hWnd, SW_MINIMIZE);
    ShowWindow(hWnd, SW_HIDE);
    
    
    while(1)
    {
        // credit: https://superuser.com/revisions/1530942/3
        result = SetThreadExecutionState(ES_SYSTEM_REQUIRED | ES_DISPLAY_REQUIRED | ES_CONTINUOUS);
        
        // Sleep for 20 seconds
        Sleep(20 * 1000);
    }
    return 0;
}
