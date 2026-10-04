#include <stdio.h>

int main(void) {
    int grid[3][3];
    printf("3x3 grid ke elements enter karein:\n");
    // Grid ki values input kar rahe hain.
    for (int row = 0; row < 3; row++) for (int column = 0; column < 3; column++) scanf("%d", &grid[row][column]);
    // Pehli value ko filhal minimum maan rahe hain.
    int min_value = grid[0][0];
    // Baqi values ko minimum ke saath compare karte hain.
    for (int row = 0; row < 3; row++) for (int column = 0; column < 3; column++) if (grid[row][column] < min_value) min_value = grid[row][column];
    printf("Grid ki minimum value: %d\n", min_value);
    return 0;
}
