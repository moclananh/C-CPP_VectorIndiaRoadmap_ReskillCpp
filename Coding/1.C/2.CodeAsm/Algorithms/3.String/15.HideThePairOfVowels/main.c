#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isAl(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == ' ');
}
// Function to check if a character is a vowel
int isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to hide pairs of vowels in the given string
void hideVowelPairs(char *str)
{
    int len = strlen(str);
    char *result = (char *)malloc((len + 1) * sizeof(char));
    int i, j = 0;
    int foundPair = 0;

    for (i = 0; i < len; i++)
    {
        if (i < len - 1 && isVowel(str[i]) && isVowel(str[i + 1]))
        {
            result[j++] = '*';
            result[j++] = '*';
            i++; // Skip the next character as it's part of the pair
            foundPair = 1;
        }
        else
        {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    if (foundPair)
    {
        printf("%s\n", result);
    }
    else
    {
        printf("there is no pair of vowels to hide\n");
    }

    free(result);
}

int main()
{
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    int check = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isAl(input[i]))
        {
            check++;
        }
    }

    if (check)
    {
        printf("Invalid input");
        return -1;
    }
    hideVowelPairs(input);

    return 0;
}