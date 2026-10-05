#include <stdio.h>

// Ye function number ki multiplication table print karta hai.
// Kuch return nahi karta, is liye return type void hai.
void print_table(int number) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main(void) {
    print_table(100);
    printf("--------------------\n");
    print_table(9);

    return 0;
}
