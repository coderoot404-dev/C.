#include <stdio.h>

int main() {
    int num = 5;
    int fact = 1;
    int i = 1;

    while(i <= num){
        fact *= i;
        i++;
    }
    printf("Factorial is: %d\n", fact);
    return 0;
}