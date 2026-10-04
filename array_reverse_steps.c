#include <stdio.h>

int main(void) {
    int numbers[5] = {1, 2, 3, 4, 5};
    // Start aur end values swap hoti hain; aadhe array tak jana kaafi hai.
    for (int i = 0; i < 5 / 2; i++) {
        int temp = numbers[i]; numbers[i] = numbers[4 - i]; numbers[4 - i] = temp;
        // Har swap ke baad array ki current state dekh rahe hain.
        for (int j = 0; j < 5; j++) printf("%d ", numbers[j]);
        printf("\n");
    }
    return 0;
}
