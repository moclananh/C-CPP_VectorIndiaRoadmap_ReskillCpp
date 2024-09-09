#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    // Reverse the number
    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if reversed number is equal to original number
    if (originalNum == reversedNum) {
        return 1; // True, it is a palindrome
    } else {
        return 0; // False, it is not a palindrome
    }
}

int main() {
    int min, max;

    // Input range from user
    scanf("%d %d", &min, &max);

    // Iterate through the range and print palindromic numbers
    for (int i = min; i <= max; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
