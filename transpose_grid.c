#include <stdio.h>

int main() {
  int grid[3][3];

  printf("Enter elements of the 3x3 grid: ");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &grid[i][j]);
    }
  }
  printf("The entered grid is:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", grid[j][i]); // Transpose the grid by swapping indices
    }
    printf("\n");
  }
  return 0;
}