#include <stdio.h>

int main(void) {
    int number = 5, factorial = 1, i = 1;
    // Factorial mein 1 se number tak tamam values multiply hoti hain.
    // 5! = 1 x 2 x 3 x 4 x 5 = 120
    while (i <= number) { factorial *= i; i++; }
    printf("Factorial: %d\n", factorial);
    return 0;
}
