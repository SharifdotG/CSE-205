#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int index = 2;
    int value = 10;

    for (int i = 4; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index] = value;

    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}