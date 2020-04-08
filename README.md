# defeat-lockscreen
Prevents Windows lock screen even if it's enforced via group policy

If it is not possible to change the lock screen settings in Windows due to being enforced with group policy, running this program will ensure the computer will never lock the screen while it is running. 

It calls [SetThreadExecutionState](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-setthreadexecutionstate) which:

> Enables an application to inform the system that it is in use, thereby preventing the system from entering sleep or turning off the display while the application is running.

I feel this is a better approach to other solutions that move the mouse cursor or generating keyboard events at intervals using powershell, vbs, wscript etc.

# Compiling 
On Linux:
```
apt install cc-mingw-w64
x86_64-w64-mingw32-gcc main.c -o main.exe
```

# Running
Just double click!

_Note application is set to hide and not appear in the taskbar, so to exit, kill it in the task manager_
