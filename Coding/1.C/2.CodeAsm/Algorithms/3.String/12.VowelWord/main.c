#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isVowel(char c)
{
    char vowels[] = "AEIOUaeiou";
    return strchr(vowels, c) != NULL;
}

int main()
{
    char input[100];
    printf("Enter a string: ");
    fgets(input, 100, stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove the trailing newline character

    
    if (strlen(input) == 0)
    {
        printf("empty string\n");
        return 0;
    }

    bool found = false;
    char *word = strtok(input, " ");
    while (word != NULL)
    {
        if (isVowel(word[0]) && isVowel(word[strlen(word) - 1]))
        {
            printf("%s ", word);
            found = true;
        }
        word = strtok(NULL, " ");
    }

    if (found)
    {
        printf("\n");
    }
    else
    {
        printf("there is no words to print\n");
    }

    return 0;
}
