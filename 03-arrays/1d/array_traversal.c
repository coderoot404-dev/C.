#include <stdio.h>

int main(void) {
    int numbers[5] = {10, 20, 30, 40, 50};
    // Array ka index 0 se start hota hai, is liye pehli value numbers[0] hai.
    for (int i = 0; i < 5; i++) printf("%d number: %d\n", i + 1, numbers[i]);
    return 0;
}
