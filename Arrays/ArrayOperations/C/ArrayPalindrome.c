#include <stdio.h>
#include <stdbool.h>

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
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}