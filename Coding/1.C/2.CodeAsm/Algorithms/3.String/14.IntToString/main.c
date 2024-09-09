#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);
    char str[100];

    // Convert integer to string
    sprintf(str, "%d", num);

    // Print the string
    printf("%s\n", str);

    return 0;
}