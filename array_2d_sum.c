#include <stdio.h>

int main(void) {
    int grid[3][3], sum = 0;
    printf("3x3 grid ke elements enter karein:\n");
    // Grid ki tamam values user se input le rahe hain.
    for (int row = 0; row < 3; row++)
        for (int column = 0; column < 3; column++) scanf("%d", &grid[row][column]);
    // Har element ko print karte hue sum mein bhi add kar rahe hain.
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) { printf("%d ", grid[row][column]); sum += grid[row][column]; }
        printf("\n");
    }
    printf("Grid ke tamam elements ka sum: %d\n", sum);
    return 0;
}
