#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *str)
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        // Ignore non-alphanumeric characters
        while (!isalnum(str[left]) && left < right)
        {
            left++;
        }
        while (!isalnum(str[right]) && left < right)
        {
            right--;
        }

        // Compare characters ignoring case
        if (tolower(str[left]) != tolower(str[right]))
        {
            return 0; // Not a palindrome
        }

        left++;
        right--;
    }

    return 1; // Palindrome
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str))
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }

    return 0;
}
