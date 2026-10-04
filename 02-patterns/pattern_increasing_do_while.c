#include <stdio.h>

int main(void) {
    int rows = 4, i = 1;
    // Do-while ki body pehle chalti hai, phir condition check hoti hai.
    do {
        int j = 1;
        // Current row ke mutabiq stars print kar rahe hain.
        do { printf("* "); j++; } while (j <= i);
        printf("\n");
        i++;
    } while (i <= rows);
    return 0;
}
