#include <stdio.h>

int main(void) {
    int rows = 4, i = 1;
    // While loop outer rows ko control karta hai.
    while (i <= rows) {
        int j = 1;
        // Har row mein i ke barabar stars print hote hain.
        while (j <= i) { printf("* "); j++; }
        printf("\n");
        i++;
    }
    return 0;
}
