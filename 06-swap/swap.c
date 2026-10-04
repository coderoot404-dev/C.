#include <stdio.h>

void swap_numbers(int *a, int *b) {
    // Pointers original variables ke addresses receive karte hain.
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int a = 10, b = 20;
    printf("Swap se pehle: a = %d, b = %d\n", a, b);
    swap_numbers(&a, &b);
    printf("Swap ke baad: a = %d, b = %d\n", a, b);
    return 0;
}
