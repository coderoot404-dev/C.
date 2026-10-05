#include <stdio.h>

void input_grid(int grid[3][3]) {
    printf("3x3 grid ke elements enter karein:\n");

    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            printf("grid[%d][%d]: ", row, column);
            scanf("%d", &grid[row][column]);
        }
    }
}

int main(void) {
    int grid[3][3];
    int target;
    int found = 0;

    input_grid(grid);

    printf("Konsi value search karni hai: ");
    scanf("%d", &target);

    // Har cell ko target value ke saath compare kar rahe hain.
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            if (grid[row][column] == target) {
                printf("%d row %d, column %d par mila.\n", target, row, column);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("%d grid mein nahi mila.\n", target);
    }

    return 0;
}
