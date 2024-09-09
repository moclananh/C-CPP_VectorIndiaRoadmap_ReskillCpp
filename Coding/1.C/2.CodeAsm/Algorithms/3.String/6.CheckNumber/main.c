#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int check = 0;
    int valid = 1; // Start with assuming it's valid
    while (str[i] != '\0')
    {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
        {
            valid = 0; // Set to invalid if any non-digit (except '.') is found
            break;     // Exit the loop as soon as we find an invalid character
        }

        if (str[i] == '.')
        {
            check++;
        }
        i++;
    }

    if (!valid)
    {
        printf("Invalid\n");
        return -1;
    }

    if (check == 1)
    {
        printf("floating number\n");
    }
    else if (check > 1)
    {
        printf("Invalid input");
    }
    else
    {
        printf("integer number\n");
    }

    return 0;
}