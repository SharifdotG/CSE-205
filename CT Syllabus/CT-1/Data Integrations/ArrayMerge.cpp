#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int arr3[n + m];

    for (int i = 0; i < n; i++) {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < m; i++) {
        arr3[n + i] = arr2[i];
    }

    for (int i = 0; i < n + m; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}