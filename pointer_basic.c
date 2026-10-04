#include <stdio.h>

int main() {
    int age = 22; // Aam variable
    int *ptr = &age; // Pointer variable jo 'age' ka address store kar raha hai

    printf("Age ki value: %d\n", age);
    printf("Age ka memory address: %p\n", &age); // %p address print karne ke liye hota hai
    printf("Pointer ke andar kya hai (Address): %p\n", ptr);
    printf("Pointer ke zariye value nikalna (Dereference): %d\n", *ptr);

    *ptr = 55; // Pointer ke zariye value change karna
    printf("Age ki nayi value: %d\n", age);
    return 0;
}