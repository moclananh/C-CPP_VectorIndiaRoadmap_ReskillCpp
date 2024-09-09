// wap to read multiple names in a data base?
#include <stdio.h>
int main()
{
    char s[3][10];
    int i;
    printf("enter names .. \n");
    for (i = 0; i < 3; i++)
        scanf("%s", s[i]);

    printf("Entered names are\n");
    for (i = 0; i < 3; i++)
        printf("%s\n", s[i]);
}