#include <stdio.h>

// Function input number ka cube return karta hai.
int cube(int number) {
    return number * number * number;
}

int main(void) {
    int cube_of_3 = cube(3);
    int cube_of_5 = cube(5);

    printf("Cube of 3 = %d\n", cube_of_3);
    printf("Cube of 5 = %d\n", cube_of_5);

    return 0;
}
