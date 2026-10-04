#include <stdio.h>
#include <string.h>

int main() {
  char name[50];
  int temp;
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);

  name[strcspn(name, "\n")] = '\0';

  int length = strlen(name);

  for (int i = 0; i < length / 2; i++) {
    temp = name[i];
    name[i] = name[length - 1 - i];
    name[length - 1 - i] = temp;
  }
  printf("Your name is: %s\n", name);
  return 0;
}