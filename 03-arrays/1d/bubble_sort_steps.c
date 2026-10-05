#include <stdio.h>

int main(void) {
    int numbers[] = {32, 42, 41, 13, 98};
    int length = (int)(sizeof(numbers) / sizeof(numbers[0]));

    // Bubble sort mein har pass adjacent elements ko compare karta hai.
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }

        printf("Pass %d ke baad: ", i + 1);
        for (int k = 0; k < length; k++) {
            printf("%d ", numbers[k]);
        }
        printf("\n");
    }

    return 0;
}
