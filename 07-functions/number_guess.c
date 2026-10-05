#include <stdio.h>

// Ye helper function guess ko actual number ke saath compare karta hai.
void check_guess(int guess, int actual) {
    if (guess < actual) {
        printf("Your guess is too low.\n");
    } else if (guess > actual) {
        printf("Your guess is too high.\n");
    } else {
        printf("Congratulations! Correct guess.\n");
    }
}

int main(void) {
    check_guess(30, 42);
    check_guess(50, 77);
    check_guess(42, 42);

    return 0;
}
