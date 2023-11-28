#include <iostream>

using namespace std;

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int key = 3;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i << endl;
            return 0;
        }
    }

    cout << "Not found" << endl;
}