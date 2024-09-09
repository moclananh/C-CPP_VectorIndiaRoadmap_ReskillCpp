#include <stdio.h>
void abc();
void abc2();
int main()
{
    abc(); // 10
    abc(); // 10
    abc(); // 10
    printf("static variable here\n");
    abc2(); // 10
    abc2(); // 11
    abc2(); // 12
}

void abc()
{
    int i = 10;
    printf("i=%d\n", i);
    i++;
    return;
}

void abc2()
{
    static int i = 10;
    printf("i=%d\n", i);
    i++;
    return;
}