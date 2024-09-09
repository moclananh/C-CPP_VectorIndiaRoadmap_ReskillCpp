#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int number = atoi(str);

    int check = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < '0' || str[i] > '9') && (str[i] != '-'))
        {
            check++;
        }

        i++;
    }

    if (!check)
    {
        printf("%s\n", str);
    }
    else
    {
        printf("invalid\n");
    }

    return 0;
}