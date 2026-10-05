#include <stdio.h>
#include <string.h>

void remove_newline(char text[]) {
    text[strcspn(text, "\n")] = '\0';
}

int main(void) {
    char name[20];
    char city[25];

    printf("Apna naam: ");
    fgets(name, sizeof(name), stdin);
    remove_newline(name);

    printf("Apna city: ");
    fgets(city, sizeof(city), stdin);
    remove_newline(city);

    printf("%s from %s\n", name, city);
    return 0;
}
