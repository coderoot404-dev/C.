#include <stdio.h>

int main() {
  int grid[3][3];
  printf("Enter the grid 3x3 form: ");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &grid[i][j]);
    }
  }

  int min = grid[0][0];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (min > grid[i][j]) {
        min = grid[i][j];
      }
    }
  }

  printf("The minimum grid is: %d\n", min);

  return 0;
}