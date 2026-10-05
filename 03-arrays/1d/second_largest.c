#include <limits.h>
#include <stdio.h>

int main(void) {
    int numbers[] = {10, 10, 5, 10, 2};
    int length = (int)(sizeof(numbers) / sizeof(numbers[0]));
    int largest = numbers[0];
    int second_largest = INT_MIN;

    for (int i = 1; i < length; i++) {
        if (numbers[i] > largest) {
            second_largest = largest;
            largest = numbers[i];
        } else if (numbers[i] > second_largest && numbers[i] != largest) {
            second_largest = numbers[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("Distinct second largest value nahi mili.\n");
    } else {
        printf("Second largest: %d\n", second_largest);
    }

    return 0;
}
