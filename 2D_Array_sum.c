#include <stdio.h>

int main() {
  int grid[3][3];
  int sum = 0;
  printf("Enter elements of the 3x3 grid: ");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &grid[i][j]);
    }
  }
  printf("The entered grid is:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", grid[i][j]);
      sum += grid[i][j];
    }
    printf("\n");
  }
  printf("The sum of all elements in the grid is: %d\n", sum);
  return 0;
}