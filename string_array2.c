#include <stdio.h>
#include <string.h>

int main() {
    char name[40];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Your name is: %s\n",name);
    printf("Your name length is: %zu\n", strlen(name));
    return 0;
}