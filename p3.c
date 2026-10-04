#include <stdio.h>

int main() {
  int num[5];

  for (int i = 0; i < 5; i++) {
    printf("Enter Number: %d\n", i + 1);
    scanf("%d", &num [i]);   //TODO: Hum is ko num + i bhi likh sakty ha kiu ky num kudh hi 1 address ha & lagany ki zaroort nahi ha
  }
  printf("\n");
  for (int i = 0; i < 5; i++) {
    printf("%d\n", num[i]);
  }

  return 0;
}