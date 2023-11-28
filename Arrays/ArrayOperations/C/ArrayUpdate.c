#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    arr[2] = 10; // Array update

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}