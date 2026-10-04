#include <stdio.h>

int main(void) {
    int numbers[5] = {12, 45, 2, 89, 23};
    int min_value = numbers[0]; // Pehli value ko filhal minimum maan rahe hain.
    // Baqi values ko minimum ke saath compare karte hain.
    for (int i = 1; i < 5; i++) if (numbers[i] < min_value) min_value = numbers[i];
    printf("Minimum number: %d\n", min_value);
    return 0;
}
