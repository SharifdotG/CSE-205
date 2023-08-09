#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}