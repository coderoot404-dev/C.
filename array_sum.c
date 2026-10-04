#include <stdio.h>

int main(void) {
    int numbers[5] = {5, 10, 15, 20, 25}, sum = 0;
    // Har array element ko sum variable mein add kar rahe hain.
    for (int i = 0; i < 5; i++) sum += numbers[i];
    printf("Tamam numbers ka sum: %d\n", sum);
    return 0;
}
