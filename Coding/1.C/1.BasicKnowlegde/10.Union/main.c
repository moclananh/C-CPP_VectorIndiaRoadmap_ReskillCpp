#include <stdio.h>

union Data
{
    int x;
    char y;

} v = {300};

int main()
{
    printf("union member addresses are: x add:%u y add:%u\n", &v.x, &v.y);

    printf("v.x=%d\n", v.x);
    printf("v.y=%d\n", v.y);

    v.y = 'a';
    printf("after modification of data member y\n");
    printf("v.x=%d\n", v.x); // x will gotr affected b/c using union

    return 0;
}
