#include <stdio.h>

void input_grid(int grid[3][3]) {
  printf("Enter the grid 3x3 form: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &grid[i][j]);
    }
  }
}

int main() {
  int grid[3][3];
  int target = 5;
  int found = 0;  // Flag variable (0 ka matlab abhi nahi mila)

  input_grid(grid);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (grid[i][j] == target) {
        printf("Found %d at position (%d, %d)\n", target, i, j);
        found = 1;  // Mil gaya toh flag ko 1 kar diya
      }
    }
  }

  // Agar loop khatam hone ke baad bhi found 0 hi raha, iska matlab number nahi
  // tha
  if (found == 0) {
    printf("%d not found in the grid.\n", target);
  }

  return 0;
}