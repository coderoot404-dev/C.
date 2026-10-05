#include <stdio.h>

int main(void) {
    int numbers[] = {32, 12, 53, 95, 67, 55, 55, 85, 41, 22};
    int length = (int)(sizeof(numbers) / sizeof(numbers[0]));
    int target;
    int found_index = -1;

    printf("Array mein kya search karna hai: ");
    scanf("%d", &target);

    // Linear search har element ko one by one check karta hai.
    for (int i = 0; i < length; i++) {
        if (numbers[i] == target) {
            found_index = i;
            break;
        }
    }

    if (found_index != -1) {
        printf("Target index %d par mila.\n", found_index);
    } else {
        printf("Target nahi mila.\n");
    }

    return 0;
}
