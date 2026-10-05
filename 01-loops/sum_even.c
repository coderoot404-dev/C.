#include <stdio.h>

int main(void) {
    int start, end;
    int sum = 0;

    printf("Start number: ");
    scanf("%d", &start);

    printf("End number: ");
    scanf("%d", &end);

    // Invalid range ko handle kar rahe hain.
    if (start > end) {
        printf("Start number end number se chhota ya barabar hona chahiye.\n");
        return 1;
    }

    // Sum/total ke liye collector ko 0 se initialize karna zaroori hai.
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("Even numbers ka sum: %d\n", sum);
    return 0;
}
