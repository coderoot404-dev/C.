#include <stdio.h>

int main(void) {
    // Binary search ke liye array sorted hona chahiye.
    int numbers[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 50;

    int left = 0;
    int right = size - 1;
    int found_index = -1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (numbers[middle] == target) {
            found_index = middle;
            break;
        }

        if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    if (found_index != -1) {
        printf("%d index %d par mila.\n", target, found_index);
    } else {
        printf("%d nahi mila.\n", target);
    }

    return 0;
}
