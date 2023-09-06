#include <bits/stdc++.h>

using namespace std;

// binary search algorithm with hardcoded array

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    bool found = false;

    cin >> key;

    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Found at index " << mid << endl;
            found = true;
            break;
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}