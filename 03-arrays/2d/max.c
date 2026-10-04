#include <stdio.h>

int main(void) {
    int grid[3][3];
    printf("3x3 grid ke elements enter karein:\n");
    // Grid ki values input kar rahe hain.
    for (int row = 0; row < 3; row++) for (int column = 0; column < 3; column++) scanf("%d", &grid[row][column]);
    // Pehli value ko filhal maximum maan rahe hain.
    int max_value = grid[0][0];
    // Baqi values ko maximum ke saath compare karte hain.
    for (int row = 0; row < 3; row++) for (int column = 0; column < 3; column++) if (grid[row][column] > max_value) max_value = grid[row][column];
    printf("Grid ki maximum value: %d\n", max_value);
    return 0;
}
