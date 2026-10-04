#include <stdio.h>
#include <string.h>

int main() {
  char city[50];

  printf("Enter your favorite city name: ");
  fgets(city, sizeof(city), stdin);

  city[strcspn(city, "\n")] = '\0';

  printf("Thanks your favorite city  name is: %s\n", city);
  return 0;
}