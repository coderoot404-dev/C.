#include <stdio.h>

int main() {
  int grid[3][3];
  int diagonal_sum = 0;

  printf("Enter the grid 3x3 form: ");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &grid[i][j]);
    }
  }


  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) {
        diagonal_sum += grid[i][j];
      }
    }
  }

   printf("The sum of the diagonal elements in the grid is: %d\n", diagonal_sum);

  return 0;
}