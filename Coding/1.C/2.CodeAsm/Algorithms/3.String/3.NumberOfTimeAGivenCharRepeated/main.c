#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    // Read string input
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    // Read key input
    char key;
    printf("Enter a key: ");
    scanf("%c", &key);

    // Print each character of the string
    int leng = strlen(str);
    int count = 0;
    for (int i = 0; i < leng; i++)
    {
        if (key == str[i])
        {
            count++;
        }
    }

    if (count != 0)
    {
        printf("%d", count);
    }
    else
    {
        printf("not found");
    }

    return 0;
}
