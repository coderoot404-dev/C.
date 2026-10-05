#include <stdio.h>

int main(void) {
    char name[40];

    // fgets spaces ke saath poora naam input kar sakta hai.
    printf("Apna naam enter karein: ");
    fgets(name, sizeof(name), stdin);

    printf("Aap ka naam: %s", name);

    return 0;
}
