#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int arr1[3];
    int arr2[2];

    for (int i = 0; i < 3; i++) {
        arr1[i] = arr[i];
    }

    for (int i = 0; i < 2; i++) {
        arr2[i] = arr[i + 3];
    }

    for (int i = 0; i < 3; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    for (int i = 0; i < 2; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}