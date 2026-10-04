#include <stdio.h>

int main(void) {
    int age = 22;
    // Pointer variable age ka memory address store karta hai.
    int *ptr = &age;

    printf("Age ki value: %d\n", age);
    printf("Age ka memory address: %p\n", (void *)&age);
    printf("Pointer mein stored address: %p\n", (void *)ptr);

    // *ptr ko dereference karne se us address par stored value milti hai.
    printf("Pointer ke zariye age: %d\n", *ptr);

    // Pointer ke zariye original variable ki value change kar rahe hain.
    *ptr = 55;
    printf("Age ki nayi value: %d\n", age);
    return 0;
}
