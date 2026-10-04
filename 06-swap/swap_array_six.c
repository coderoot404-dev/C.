#include <stdio.h>

int main(void) {
    int numbers[6] = {10, 20, 30, 40, 50, 60};
    // Start aur end values ko pair-wise swap karke array reverse kar rahe hain.
    for (int i = 0; i < 6 / 2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[5 - i];
        numbers[5 - i] = temp;
    }
    for (int i = 0; i < 6; i++) printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}
