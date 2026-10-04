#include <stdio.h>

int main() {
  int grid[3][3] = {{4, 5, 7}, {9, 10, 20}, {1, 2, 3}};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", grid[i][j]);
    }
    printf("\n");
  }
  return 0;
}