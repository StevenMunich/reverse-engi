#include <stdio.h>
#include <windows.h>

int health = 100;

int main() {
    while (1) {
        printf("Health: %d\n", health);
        health -= 10;
        Sleep(1000);
    }
    return 0;
}

