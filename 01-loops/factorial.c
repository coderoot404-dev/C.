#include <stdio.h>

int main(void) {
    int number = 5;
    int factorial = 1;
    int i = 1;

    // Factorial mein 1 se number tak tamam values multiply hoti hain.
    // 5! = 1 x 2 x 3 x 4 x 5 = 120
    if (number < 0) {
        printf("Negative number ka factorial is basic example mein nahi hai.\n");
        return 1;
    }

    while (i <= number) {
        factorial *= i;
        i++;
    }

    printf("Factorial: %d\n", factorial);

    return 0;
}
