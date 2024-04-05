#include <windows.h>

int main() {
    HWND console = GetConsoleWindow();

    if (console != NULL)
        RECT rect;
        GetWindowRect(console, &rect);
        int screenWidth = GetSystemMetrics(SM_CXSCREEN);
        int screenHeight = GetSystemMetrics(SM_CYSCREEN);

        int consoleWidth = rect.right - rect.left;
        int consoleHeight = rect.bottom - rect.top;

        int consolePosX = (screenWidth - consoleWidth) / 2;
        int consolePosY = (screenHeight - consoleHeight) / 2;

        MoveWindow(console, consolePosX, consolePosY, consoleWidth, consoleHeight, TRUE);
    }

    // Your program logic goes here

    return 0;
}
