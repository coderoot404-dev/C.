#include <stdio.h>

// Function 2D array mein user se values fill karta hai.
void fill_grid(int grid[3][3]) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("grid[%d][%d] ki value: ", row, col);
            scanf("%d", &grid[row][col]);
        }
    }
}

// Function 2D array ko display karta hai.
void print_grid(int grid[3][3]) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", grid[row][col]);
        }
        printf("\n");
    }
}

int main(void) {
    int grid[3][3];

    fill_grid(grid);
    print_grid(grid);

    return 0;
}
