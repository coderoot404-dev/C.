#include <stdio.h>

int main() {
  int arr[5] = {12, 45, 2, 89, 23};

  int max = arr[0];

  for (int i = 1; i < 5; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  printf("The Maximum number is: %d\n", max);
  return 0;
}