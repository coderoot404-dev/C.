#include <stdio.h>
#include <string.h>

int main(void) {
    char text[] = "Azan Hassan";
    int start = 0;
    int end = (int)strlen(text) - 1;

    // String ko dono ends se swap karte hue reverse kar rahe hain.
    while (start < end) {
        char temp = text[start];
        text[start] = text[end];
        text[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", text);
    return 0;
}
