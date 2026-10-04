#include <stdio.h>

void reverse_array(int *array, int size) {
    // Pointer arithmetic ke zariye array ke elements ko reverse kar rahe hain.
    for (int i = 0; i < size / 2; i++) {
        int temp = *(array + i);
        *(array + i) = *(array + size - 1 - i);
        *(array + size - 1 - i) = temp;
    }
}

int main(void) {
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5;
    reverse_array(array, size);

    for (int i = 0; i < size; i++) printf("%d ", array[i]);
    printf("\n");
    return 0;
}
