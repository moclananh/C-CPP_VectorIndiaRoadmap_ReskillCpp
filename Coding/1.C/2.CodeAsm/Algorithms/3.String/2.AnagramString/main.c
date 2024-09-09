#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define CHAR_COUNT 256 // Number of ASCII characters

// Function to check if two strings are anagrams
int areAnagrams(const char *str1, const char *str2)
{
    int count[CHAR_COUNT] = {0}; // Array to keep track of character counts

    // If lengths of strings are not equal, they can't be anagrams
    if (strlen(str1) != strlen(str2))
    {
        return 0;
    }

    // Convert strings to lowercase and count the characters
    for (int i = 0; str1[i] && str2[i]; i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < CHAR_COUNT; i++)
    {
        if (count[i] != 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str1[100], str2[100];

    // Read first string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character

    // Read second string
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character

    // Check if the strings are anagrams
    if (areAnagrams(str1, str2))
    {
        printf("anagram string\n");
    }
    else
    {
        printf("not anagram string\n");
    }

    return 0;
}
