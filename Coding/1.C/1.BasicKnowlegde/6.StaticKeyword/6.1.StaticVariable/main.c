#include <stdio.h>
void abc();

static int x = 20; // global static variable

int main()
{
    static int x = 10;                // static local variable
    printf("in main fun x->%d\n", x); // x= 10;
    abc();
}
void abc()
{
    printf("in abc fun x->%d\n", x); // x =20
    return;
}