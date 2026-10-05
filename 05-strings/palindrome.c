#include <stdio.h>
#include <string.h>

int main(void) {
    char text[100];

    printf("Word enter karein: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    int left = 0;
    int right = (int)strlen(text) - 1;
    int palindrome = 1;

    while (left < right) {
        if (text[left] != text[right]) {
            palindrome = 0;
            break;
        }

        left++;
        right--;
    }

    if (palindrome) {
        printf("Palindrome hai.\n");
    } else {
        printf("Palindrome nahi hai.\n");
    }

    return 0;
}
