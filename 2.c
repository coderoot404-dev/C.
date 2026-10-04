#include <stdio.h>

int main() {
  int row = 4;
  for (int i = 0; i <= row; i++) {
    for (int j = 1; j <= i; j++) {  //TODO: J utni bar chaly ga jo i ki value ho gi jasy phely 1 bar chaly ga kiu ky i ki value ho gi 1
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
