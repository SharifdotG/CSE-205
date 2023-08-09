#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    int pos;
    cin >> pos;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}