#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("enter str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Check if the input is only spaces
    int allSpaces = 1;
    for (int i = 0; i < strlen(str); i++)
    {
        if (!isspace(str[i]))
        {
            allSpaces = 0;
            break;
        }
    }
    if (allSpaces)
    {
        printf("ERROR\n");
        return 0;
    }

    // Check for invalid characters
    for (int i = 0; i < strlen(str); i++)
    {
        if (!isalpha(str[i]) && !isspace(str[i])) // Check if the character is not an alphabet and not a space
        {
            printf("null\n");
            return 0; // Exit the program
        }
    }

    // Convert lowercase to uppercase and vice versa
    for (int i = 0; i < strlen(str); i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s\n", str);

    return 0;
}
