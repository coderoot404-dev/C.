#include <stdio.h>

int main() {
  int row = 4;
  int i = 1;
  while (i <= row) {
    int j = 1;
    while (j <= i) {
      printf("* ");
      j++;
    }
    i++;
    printf("\n");
  }
  return 0;
}