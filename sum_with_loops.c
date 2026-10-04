#include <stdio.h>

int main(void) {
    // For loop se 1 se 10 tak numbers ka total nikal rahe hain.
    int sum_for = 0;
    for (int i = 1; i <= 10; i++) sum_for += i;
    printf("1 se 10 tak ka sum: %d\n", sum_for);

    // While loop se 1 se 15 tak ka sum nikal rahe hain.
    int sum_while = 0, i = 1;
    while (i <= 15) { sum_while += i; i++; }
    printf("1 se 15 tak ka sum: %d\n", sum_while);

    // Do-while mein condition end par check hoti hai, is liye body kam az kam ek dafa chalti hai.
    int sum_do_while = 0, number = 1;
    do { sum_do_while += number; number++; } while (number <= 10);
    printf("1 se 10 tak ka sum (do-while): %d\n", sum_do_while);
    return 0;
}
