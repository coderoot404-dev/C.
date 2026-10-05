#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int first = 10;
    int second = 20;

    printf("Sum: %d\n", add(first, second));

    return 0;
}
