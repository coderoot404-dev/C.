#include <stdio.h>

int main() {
  int grid[3][3];
  printf("Enter the grid 3x3 form: ");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &grid[i][j]);
    }
  }

  int max = grid[0][0];


  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (max < grid[i][j]) {
        max = grid[i][j];
      }
    }
  }

  printf("The maximum grid is: %d\n", max);

  return 0;
}