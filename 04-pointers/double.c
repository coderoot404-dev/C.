#include <stdio.h>

void double_number(int *number) {
    // Pointer ke zariye original variable ki value ko 2 se multiply kar rahe hain.
    *number = *number * 2;
}

int main(void) {
    int number = 10;
    printf("Original number: %d\n", number);
    // &number se number ka address function ko pass hota hai.
    double_number(&number);
    printf("Doubled number: %d\n", number);
    return 0;
}
