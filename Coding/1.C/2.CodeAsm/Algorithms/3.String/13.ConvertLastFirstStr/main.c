#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int isAlphabetic(const char *word)
{
    for (int i = 0; word[i]; i++)
    {
        if (!isalpha((unsigned char)word[i]))
        {
            return 0;
        }
    }
    return 1;
}

void convertFirstLastToUpper(char *word)
{
    int len = strlen(word);
    if (len > 0)
    {
        word[0] = toupper((unsigned char)word[0]);
        if (len > 1)
        {
            word[len - 1] = toupper((unsigned char)word[len - 1]);
        }
    }
}

int main()
{
    char input[MAX_LENGTH];
    char output[MAX_LENGTH] = "";
    char *word;
    int isValid = 1;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Remove newline

    word = strtok(input, " ");
    while (word != NULL)
    {
        if (!isAlphabetic(word))
        {
            isValid = 0;
            break;
        }
        convertFirstLastToUpper(word);
        strcat(output, word);
        strcat(output, " ");
        word = strtok(NULL, " ");
    }

    if (!isValid)
    {
        printf("ERROR\n");
    }
    else
    {
        printf("%s\n", output);
    }

    return 0;
}