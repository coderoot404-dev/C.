#include <stdio.h>

int main(void) {
    int start, end;

    printf("Start number: ");
    scanf("%d", &start);

    printf("End number: ");
    scanf("%d", &end);

    // Agar range ulta ho to program ko rok dete hain.
    if (start > end) {
        printf("Start number end number se chhota ya barabar hona chahiye.\n");
        return 1;
    }

    // Range ke andar sirf even numbers print kar rahe hain.
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d is Even\n", i);
        }
    }

    return 0;
}
