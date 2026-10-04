#include <stdio.h>

int main(void) {
    int numbers[5];
    // User se array ki 5 values input le rahe hain.
    for (int i = 0; i < 5; i++) { printf("Number %d enter karein: ", i + 1); scanf("%d", &numbers[i]); }
    printf("\nEntered values:\n");
    // Input ki hui values ko array ke index ke through print kar rahe hain.
    for (int i = 0; i < 5; i++) printf("%d\n", numbers[i]);
    return 0;
}
