#include <stdio.h>
int main() {
  int rows = 4;
  int i = 1;  // Outer loop ki initialization
  int j = 1;  // Inner loop ki initialization

  do {
    do {
      printf("* ");
      j++;  // Inner loop ka increment
    } while (j <= i);  // Inner loop ki condition baad mein check hogi

    printf("\n");  // New line
    i++;           // Outer loop ka increment
  } while (i <= rows);  // Outer loop ki condition baad mein check hogi

  return 0;
}