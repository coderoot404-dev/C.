#include <stdio.h>

int main(void) {
    int numbers[5] = {1, 2, 3, 4, 5};
    // Last index se first index ki taraf ja rahe hain, is liye output reverse mein milega.
    for (int i = 4; i >= 0; i--) printf("%d\n", numbers[i]);
    return 0;
}
