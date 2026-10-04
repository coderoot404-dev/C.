#include <stdio.h>

int main(void) {
    int grid[3][3] = {{4, 5, 7}, {9, 10, 20}, {1, 2, 3}};
    // 3x3 grid mein 3 rows aur 3 columns hain.
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) printf("%d ", grid[row][column]);
        printf("\n");
    }
    return 0;
}
