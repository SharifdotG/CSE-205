#include <bits/stdc++.h>

using namespace std;

int main() {
    float arr[] = {3.75, 3.95, 4.00, 3.75, 3.80, 3.90, 3.85, 3.95, 3.90, 3.80};
    int t = 6;
    
    while (t--) {
        float max = 0;
        int count = 0;

        for (int i = 1; i < 10; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        for (int i = 0; i < 10; i++) {
            if (arr[i] == max) {
                count++;
                arr[i] = 0;
            }
        }

        cout << "Max CGPA (" << max << "): " << count << endl;
    }
}