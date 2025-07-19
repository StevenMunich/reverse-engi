#include <stdio.h>


void captureThisFlag(){
	printf("Branch B\n");
}

int main() {
    int x = 1;
    if (x == 1) {
        printf("Branch A\n");
    } else {
        capture thisFlag();
    }
    getchar();
    return 0;
}
