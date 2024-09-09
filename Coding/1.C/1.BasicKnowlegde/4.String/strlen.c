#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    printf("leng of string:%d ", strlen(str));

    return 0;
}
