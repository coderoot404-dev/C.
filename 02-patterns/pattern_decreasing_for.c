#include <stdio.h>

int main(void) {
    int rows = 4;
    // Har row ke baad i kam hota hai, is liye stars bhi kam hote jate hain.
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
