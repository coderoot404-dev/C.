#include <stdio.h>

void double_value(int *number) {
    *number *= 2;
}

int main(void) {
    int number = 10;

    double_value(&number);

    // Pointer ke through original variable change hua.
    printf("Doubled value: %d\n", number);

    return 0;
}
