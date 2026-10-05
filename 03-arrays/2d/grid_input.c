#include <stdio.h>

int main(void) {
    int grid[3][3];

    // Nested loops se 3x3 grid ki har position par input le rahe hain.
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("grid[%d][%d] ki value: ", row, col);
            scanf("%d", &grid[row][col]);
        }
    }

    // Grid ko rows aur columns ki form mein display kar rahe hain.
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", grid[row][col]);
        }
        printf("\n");
    }

    return 0;
}
