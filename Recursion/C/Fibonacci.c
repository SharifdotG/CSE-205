#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}