#include <stdio.h>

void towerOfHanoi(int n, char src, char dest, char helper) {
    if (n == 0) {
        return;
    }

    towerOfHanoi(n - 1, src, helper, dest);
    printf("Move from %c to %c\n", src, dest);
    towerOfHanoi(n - 1, helper, dest, src);
}

int main() {
    towerOfHanoi(3, 'A', 'C', 'B');

    return 0;
}