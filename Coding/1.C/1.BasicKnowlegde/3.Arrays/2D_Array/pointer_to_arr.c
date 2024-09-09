#include <stdio.h>
int main()
{
    int a[2][3] = {{10, 20, 30},
                   {40, 50, 60}};
    int(*p)[3]; // pointer to an array of 3 intigers
    p = a;
    // printf("%d\n",sizeof(p));
    // printf("a=%u\n", a);
    // printf("***********\n");

    // printf("p=%u\n", p);
    // printf("p+1=%u\n", p + 1);
    // printf("*p=%u\n", *p);
    // printf("*p+1=%u\n", *p + 1);

    // printf("%d", *(p[0] + 1));
    printf("%d ", *(p[0] + 2)); // printf("%d ", *(*(p + 0) + 2)); || *(*(p + row) + col) || *(p[row] + col)
    printf("%d ", *(p[1] + 2)); // mean arr[1][2] -> 60
    printf("%d ", (p[1][1]));
}
