#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to insert STRING_2 into STRING_1 at a specific location
void insertStringAt(char *s1, char *s2, int n)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (n > len1 || n < 0)
    {
        printf("invalid location\n");
        return;
    }

    char *result = (char *)malloc(len1 + len2 + 1);
    strncpy(result, s1, n);
    result[n] = '\0';

    strcpy(result + n, s2);
    strcpy(result + n + len2, s1 + n);

    printf("%s\n", result);
    free(result);
}

int main()
{
    char s1[100], s2[100];
    int n;

    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    scanf("%d", &n);

    insertStringAt(s1, s2, n);

    return 0;
}