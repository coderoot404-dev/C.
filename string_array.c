#include <stdio.h>
#include <string.h>

int main(void) {
    char city[50];
    printf("Apni favorite city enter karein: ");
    // fgets spaces ke saath poori string input kar sakta hai.
    fgets(city, sizeof(city), stdin);

    // fgets aksar newline save karta hai; yahan usay remove kar rahe hain.
    city[strcspn(city, "\n")] = '\0';
    printf("Aap ki favorite city: %s\n", city);
    return 0;
}
