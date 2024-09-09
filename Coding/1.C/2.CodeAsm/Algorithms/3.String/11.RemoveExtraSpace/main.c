#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool removeExtraSpaces(char *str)
{
    int j = 0;
    bool inSpace = false;
    bool extraSpacesRemoved = false;

    for (int i = 0; i < strlen(str); i++)
    {
        if (!isspace(str[i]))
        {
            if (inSpace && j > 0)
            {
                str[j++] = ' ';
                inSpace = false;
            }
            str[j++] = str[i];
        }
        else
        {
            if (inSpace == false && j > 0)
            {
                inSpace = true;
            }
            else if (inSpace)
            {
                extraSpacesRemoved = true;
            }
        }
    }

    str[j] = '\0';
    return extraSpacesRemoved;
}

bool isEmptyString(const char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (!isspace(str[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isEmptyString(str))
    {
        printf("empty string\n");
        return -1;
    }

    if (removeExtraSpaces(str))
    {
        printf("%s\n", str);
    }
    else
    {
        printf("no extra spaces\n");
    }

    return 0;
}
