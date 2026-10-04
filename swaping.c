#include <stdio.h>

int main() {
  int nums[6] = {10, 20, 30, 40, 50, 60};
  int temp;

  for (int i = 0; i < 6 / 2; i++) {
    temp = nums[i];
    nums[i] = nums[5 - i];
    nums[5 - i] = temp;
  }
  for (int i = 0; i < 6; i++) {
    printf("%d ", nums[i]);
  }
  return 0;
}