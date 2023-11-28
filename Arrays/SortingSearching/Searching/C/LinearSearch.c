#include <stdio.h>

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int key = 3;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            printf("Found at index %d\n", i);
            return 0;
        }
    }

    printf("Not found\n");
}