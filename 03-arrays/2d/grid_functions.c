#include <stdio.h>

// 2D array ko function mein pass karne ka basic example.
void print_grid(int grid[3][3]) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", grid[row][col]);
        }
        printf("\n");
    }
}

int main(void) {
    int grid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    print_grid(grid);

    return 0;
}
