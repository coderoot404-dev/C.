#include <stdio.h>

int main(void) {
    int grid[3][3];
    printf("3x3 grid ke elements enter karein:\n");
    // User se har row aur column ki value input le rahe hain.
    for (int row = 0; row < 3; row++)
        for (int column = 0; column < 3; column++) scanf("%d", &grid[row][column]);
    printf("Entered grid:\n");
    // Input ke baad poori grid display kar rahe hain.
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) printf("%d ", grid[row][column]);
        printf("\n");
    }
    return 0;
}
