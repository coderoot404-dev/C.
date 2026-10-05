#include <stdio.h>

int main(void) {
    int numbers[] = {64, 25, 12, 22, 11};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size - 1; i++) {
        int smallest_index = i;

        for (int j = i + 1; j < size; j++) {
            if (numbers[j] < numbers[smallest_index]) {
                smallest_index = j;
            }
        }

        int temp = numbers[i];
        numbers[i] = numbers[smallest_index];
        numbers[smallest_index] = temp;
    }

    printf("Sorted array: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
