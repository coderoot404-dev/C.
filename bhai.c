#include <stdio.h>

void number_double(int* num) { *num = *num * 2; }
int main() {
  int number = 10;
  printf("Original number: %d\n", number);
  number_double(&number);
  printf("Doubled number: %d\n", number);
  return 0;
}