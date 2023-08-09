#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int s = ceil(n / 2.0);
    int arr1[s];

    for (int i = 0; i < s; i++) {
        arr1[i] = arr[i];
    }

    int arr2[n - s];

    for (int i = 0; i < n - s; i++) {
        arr2[i] = arr[s + i];
    }

    for (int i = 0; i < s; i++) {
        cout << arr1[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n - s; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}