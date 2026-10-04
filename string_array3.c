#include <stdio.h>
#include <string.h>

int main(void) {
    char name[50];
    printf("Apna naam enter karein: ");
    fgets(name, sizeof(name), stdin);

    // fgets ki newline remove kar rahe hain taake reverse clean output de.
    name[strcspn(name, "\n")] = '\0';
    int length = (int)strlen(name);

    // String ko aadhe raste tak swap karke reverse kar rahe hain.
    for (int i = 0; i < length / 2; i++) {
        char temp = name[i];
        name[i] = name[length - 1 - i];
        name[length - 1 - i] = temp;
    }

    printf("Reverse naam: %s\n", name);
    return 0;
}
