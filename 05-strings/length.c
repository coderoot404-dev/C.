#include <stdio.h>
#include <string.h>

int main(void) {
    char text[100];

    printf("Text enter karein: ");
    fgets(text, sizeof(text), stdin);

    // fgets ke newline ko length se pehle remove kar rahe hain.
    text[strcspn(text, "\n")] = '\0';

    printf("Length: %zu\n", strlen(text));

    return 0;
}
