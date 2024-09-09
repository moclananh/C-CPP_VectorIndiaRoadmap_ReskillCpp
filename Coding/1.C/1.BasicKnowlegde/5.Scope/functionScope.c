#include <stdio.h>
int *fun();
int main()
{
    int *p;
    p = fun();
    printf("after function call\n");
    printf("*p = %d\n", *p); // cannot get the value x
}
int *fun()
{
    int i = 100; // auto variable
    return &i;
}

// NOTE: all auto var are local var. but all local var may not be auto