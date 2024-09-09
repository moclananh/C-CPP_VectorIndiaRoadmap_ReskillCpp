#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// Function to check if a string is a palindrome
bool isPalindrome(char *str)
{
    int left = 0, right = strlen(str) - 1;
    while (left < right)
    {
        while (left < right && !isalnum(str[left]))
        {
            left++;
        }
        while (left < right && !isalnum(str[right]))
        {
            right--;
        }
        if (tolower(str[left]) != tolower(str[right]))
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Function to count the number of palindromes in a string
int countPalindromes(char *str)
{
    int count = 0;
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        if (isPalindrome(token))
        {
            count++;
        }
        token = strtok(NULL, " ");
    }
    return count;
}

int main()
{
    char input[100];
    fgets(input, 100, stdin);
    input[strcspn(input, "\n")] = '\0';

    int check = 1;
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isspace(input[i]))
        {
            check = 0;
            break;
        }
    }
    if (check)
    {
        printf("empty string");
        return -1;
    }

    int palindromeCount = countPalindromes(input);
    if (palindromeCount == 0)
    {
        printf("no palindromes in the given string");
    }
    else
    {
        printf("%d\n", palindromeCount);
    }

    return 0;
}