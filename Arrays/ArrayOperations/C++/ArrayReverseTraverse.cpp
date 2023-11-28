#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}