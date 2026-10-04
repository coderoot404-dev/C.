#include <stdio.h>

int main(void) {
    int rows = 4;
    // Outer loop rows control karta hai.
    for (int i = 0; i <= rows; i++) {
        // Inner loop current row ke barabar stars print karta hai.
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
