#include <stdio.h>
#include <string.h>
#include <ctype.h>

int case_insensitive_compare(const char *s1, const char *s2, int len)
{
    for (int i = 0; i < len; i++)
    {
        char c1 = tolower((unsigned char)s1[i]);
        char c2 = tolower((unsigned char)s2[i]);
        if (c1 != c2)
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];
    char substr[10];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a substring: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0';

    int sublen = strlen(substr);

    int check = 0;
    for (int i = 0; i <= strlen(str) - sublen; i++)
    {
        if (case_insensitive_compare(str + i, substr, sublen))
        {
            check++;
            for (int j = 0; j < sublen; j++)
            {
                if (islower(str[i + j]))
                {
                    str[i + j] = toupper(str[i + j]);
                }
                else if (isupper(str[i + j]))
                {
                    str[i + j] = tolower(str[i + j]);
                }
            }
        }
    }
    if (check)
        printf("Output: \"%s\"\n", str);
    else
        printf("sub string not found");
    return 0;
}