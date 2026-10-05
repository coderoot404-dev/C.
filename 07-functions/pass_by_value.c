#include <stdio.h>

void change_value(int number) {
    number = 100;
}

int main(void) {
    int number = 10;

    change_value(number);

    // Pass by value mein original variable change nahi hota.
    printf("Original value: %d\n", number);

    return 0;
}
