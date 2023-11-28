#include <iostream>

using namespace std;

int main() {
    // bubble sort
    int arr[5] = {5, 4, 3, 2, 1};
    int temp;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        cout << arr[i] << " ";
    }
}