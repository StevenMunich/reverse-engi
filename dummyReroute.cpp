#include <stdio.h>

void payload() {
    printf("HOOKED FUNCTION EXECUTED\n");
}

int main() {
    int x = 1;
    if (x == 1) {
        payload(); // Can patch this call to point elsewhere
    } else {
        printf("Original branch B\n");
    }
    return 0;
