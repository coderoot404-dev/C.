#include <stdio.h>

int main(void) {
    int numbers[5] = {12, 45, 2, 89, 23};
    int max_value = numbers[0]; // Pehli value ko filhal maximum maan rahe hain.
    // Baqi values ko maximum ke saath compare karte hain.
    for (int i = 1; i < 5; i++) if (numbers[i] > max_value) max_value = numbers[i];
    printf("Maximum number: %d\n", max_value);
    return 0;
}
