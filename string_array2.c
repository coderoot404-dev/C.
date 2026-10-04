#include <stdio.h>
#include <string.h>

int main(void) {
    char name[40];
    printf("Apna naam enter karein: ");
    fgets(name, sizeof(name), stdin);

    // Input ke end mein aane wali newline ko string se remove kar rahe hain.
    name[strcspn(name, "\n")] = '\0';
    printf("Aap ka naam: %s\n", name);
    printf("Naam ki length: %zu\n", strlen(name));
    return 0;
}
