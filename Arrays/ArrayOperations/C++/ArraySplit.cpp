#include <iostream>

using namespace std;

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
        cout << arr1[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 2; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}