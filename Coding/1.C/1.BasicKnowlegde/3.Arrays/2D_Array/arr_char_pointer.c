// wap to read multiple names in a data base?
#include <stdio.h>
int main()
{
    int i;
    char *p[3] = {"abcd", "mnop", "xyz"};
    // printf("Entered names are\n");
    for (i = 0; i < 3; i++)
        printf("%s\n", p[i]);
}