#include <stdio.h>
#include <string.h>

void swap_chars(char *str, int pos1, int pos2)
{
    char temp = str[pos1];
    str[pos1] = str[pos2];
    str[pos2] = temp;
}

int swap_all_occurrences(char *str, const char *to_swap)
{
    int len = strlen(to_swap);
    int check = 0;
    for (int i = 0; i <= strlen(str) - len; i++)
    {
        if (strncmp(&str[i], to_swap, len) == 0)
        {
            check++;
            for (int j = 0; j < len - 1; j += 2)
            {
                swap_chars(str, i + j, i + j + 1);
            }
        }
    }
    return check;
}

int main()
{
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (swap_all_occurrences(str1, str2))
    {
        printf("%s\n", str1);
    }
    else
    {
        printf("invalid\n");
    }

    return 0;
}
