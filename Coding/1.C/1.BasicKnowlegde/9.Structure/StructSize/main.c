#include <stdio.h>
struct A
{
    int x;
    char y;
    int z;
    char m;
    float k;
};
int main()
{
    struct A v;
    printf("%d\n", sizeof(v));
}