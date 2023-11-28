#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 2, 1};
    bool isPalindrome = true;

    for (int i = 0; i < 5; i++) {
        if (arr[i] != arr[4 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}