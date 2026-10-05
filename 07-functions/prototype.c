#include <stdio.h>

// Function prototype: compiler ko function ke baare mein pehle batata hai.
int square(int number);

int main(void) {
    int number = 6;

    printf("Square: %d\n", square(number));

    return 0;
}

int square(int number) {
    return number * number;
}
