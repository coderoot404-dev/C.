#include <stdio.h>

int main(void) {
    int grid[3][3], diagonal_sum = 0;
    printf("3x3 grid ke elements enter karein:\n");
    // Pehle poori grid input le rahe hain.
    for (int row = 0; row < 3; row++)
        for (int column = 0; column < 3; column++) scanf("%d", &grid[row][column]);
    // Main diagonal mein row aur column ka index same hota hai.
    for (int i = 0; i < 3; i++) diagonal_sum += grid[i][i];
    printf("Main diagonal ka sum: %d\n", diagonal_sum);
    return 0;
}
