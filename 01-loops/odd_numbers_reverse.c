#include <stdio.h>

int main(void) {
    // 10 se 1 ki taraf ja rahe hain taake odd numbers reverse order mein milen.
    for (int i = 10; i >= 1; i--) {
        // % remainder deta hai; remainder 0 na ho to number odd hai.
        if (i % 2 != 0) printf("%d\n", i);
    }
    return 0;
}
