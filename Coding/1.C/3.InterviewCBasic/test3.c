#include <stdio.h>
#include <string.h>
void myfunc(int *a)
{
    *a += 1;
    return;
}

int main()
{
    int a = 10;
    myfunc(&a);
    printf("%d", a);

    return 0;
}