#include <stdio.h>
int main()
{
    char a[] = "abcdef";
    char *p = a;
    printf("%s\n", p++ + 3);
    printf("%c\n", *p);
}