#include <stdio.h>

int main(void) {
    int numbers[40];

    // sizeof(array) / sizeof(array[0]) se total elements count milta hai.
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < length; i++) {
        numbers[i] = i;
    }

    printf("Array ki length: %d\n", length);
    return 0;
}
