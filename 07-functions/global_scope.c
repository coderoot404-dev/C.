#include <stdio.h>

int shared = 50;  // Global variable ko multiple functions access kar sakte hain.

void print_shared_value(void) {
    printf("Function ke andar shared value: %d\n", shared);
}

int main(void) {
    printf("Main ke andar shared value: %d\n", shared);
    print_shared_value();

    return 0;
}
