#include <stdio.h>

int main() {
  int nums[5] = {5, 10, 15, 20, 25};
  int sum = 0;

  for (int i = 0; i < 5; i++) {
    sum += nums[i];
  }
  printf("Total Sum of all number is: %d\n", sum);
  return 0;
}
