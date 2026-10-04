#include <stdio.h>

int main(void) {
    int grid[3][3];
    printf("3x3 grid ke elements enter karein:\n");
    for (int row = 0; row < 3; row++) for (int column = 0; column < 3; column++) scanf("%d", &grid[row][column]);
    printf("Transpose of grid:\n");
    // Transpose mein rows aur columns ki positions swap hoti hain.
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) printf("%d ", grid[column][row]);
        printf("\n");
    }
    return 0;
}
