#include <stdio.h>

int main(void) {
    int size = 3;
    // Outer loop rows aur inner loop har row ke stars control karta hai.
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
