#include <stdio.h>
struct A
{
    int x;
    int y;
};

void fun(struct A);

int main()
{
    struct A v = {10, 20};
    fun(v);
    printf("after func call\n");
    printf("x = %d y = %d", v.x, v.y);
}

void fun(struct A var)
{
    printf("Struct data in fun function\n");
    printf("%d \n", var.x);
    printf("%d \n", var.y);
    var.x = 100; // it not effect
    var.y = 200;
}