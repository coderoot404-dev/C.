#include <stdio.h>

int main() {
  int sum = 0;
  for (int i = 1; i <= 10; i++) {
    sum += i;
  }
  printf("The sum of first 10 number is: %d\n", sum);

  printf("\n");
  int sum2 = 0;
  int i = 1;
  while (i <= 15) {
    sum2 += i;
    i++;
  }
  printf("The sum of first 15 number is: %d\n", sum2);

  printf("\n");

  int i2 = 1;
  int sum3 = 0;

  do {
    sum3 += i2;
    i2++;
  } while (i2 <= 10);

  printf("The sum of first 10 number and do while loop sy ha: %d\n", sum3);

  return 0;
}