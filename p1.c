#include <stdio.h>

int main() {
  int arr[5] = {10, 20, 30, 40, 50};

  for (int i = 0; i < 5; i++) {    //TODO: ma ny i ko 1 sy suru kia tha is liy 10 skip ho gaya tha array hamesha 0 sy suru hota ha na ky 1 sy
    printf("The %d number is: %d\n", i + 1, arr[i]);
  }
  return 0;
}