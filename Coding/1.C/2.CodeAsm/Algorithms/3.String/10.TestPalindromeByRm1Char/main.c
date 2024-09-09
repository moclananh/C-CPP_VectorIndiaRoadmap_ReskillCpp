#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findPalindromeIndex(char *str)
{
    int len = strlen(str);

    // Check if the string is already a palindrome
    int left = 0, right = len - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            break;
        }
        left++;
        right--;
    }

    if (left >= right)
    {
        return -1; // The string is already a palindrome
    }

    // Try removing each character to see if it results in a palindrome
    for (int i = 0; i < len; i++)
    {
        char *temp = malloc(len * sizeof(char));
        strcpy(temp, str);

        // Remove the character at index i
        for (int j = i; j < len - 1; j++)
        {
            temp[j] = temp[j + 1];
        }
        temp[len - 1] = '\0'; // Ensure the string is null-terminated

        // Check if the modified string is a palindrome
        left = 0, right = strlen(temp) - 1;
        while (left < right)
        {
            if (temp[left] != temp[right])
            {
                break;
            }
            left++;
            right--;
        }

        if (left >= right)
        {
            int result = i;
            free(temp);
            return result; // Found the index to remove to make the string a palindrome
        }

        free(temp);
    }

    return -2; // No solution found
}

int main()
{
    char input[100];
    printf("Enter a string: ");
    fgets(input, 100, stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove the trailing newline character

    int index = findPalindromeIndex(input);
    if (index == -1)
    {
        printf("already a palindrome");
    }
    else if (index == -2)
    {
        printf("can not be a palindrome\n");
    }
    else
    {
        printf("%d\n", index);
    }

    return 0;
}