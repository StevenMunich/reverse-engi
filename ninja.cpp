#include <windows.h>
#include <stdio.h>

int main() {
	
	volatile int health = 100; //That tells the compiler: “This value might change—don’t assume.”
    while (true) {
        // Hotkey check
        if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
            //MessageBoxA(NULL, "HOOKED!", "Hotkey Trigger", MB_OK);
            health -=5;
            printf("OUCH now i have only %d life left\n", health);
			fflush(stdout);
            if(health < 0) break;
        }

        // Optional trace point
        printf("Idle..health is %d.\n", health);
        printf("Address of health: %p\n", (void*)&health);
        fflush(stdout);
        Sleep(500);  // Runtime footprint
    }

    return 0;
}

