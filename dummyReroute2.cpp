#include <stdio.h>

void payload() {
    printf("HOOKED FUNCTION EXECUTED\n");
}

int main() {
      while (1) {
        if (GetAsyncKeyState(VK_F2) & 0x8000) {
            MessageBoxA(NULL, "HOOKED!", "Hotkey Trigger", MB_OK);
            break;
        } else {
        	payload(); // Can patch this call to point elsewhere
		}
        Sleep(100);
    }
    return 0;
    
}
