
#include <stdio.h>
int main()
{
    int a[2][2][3] = {{{10, 20, 30}, {40, 50, 60}}, {{70, 80, 90}, {100, 110, 120}}};
    int n, r, c;
    printf("size of a %d\n", sizeof(a));
    printf("size of a[0] %d\n", sizeof(a[0]));
    printf("size of a[0][0] %d\n", sizeof(a[0][0]));

    // n->no of 2d arrays
    n = sizeof(a) / sizeof(a[0]);
    r = sizeof(a[0]) / sizeof(a[0][0]);       // r->no of 1d arrys
    c = sizeof(a[0][0]) / sizeof(a[0][0][0]); // c->no elements in 1d array

    printf("n = %d   r = %d    c = %d\n", n, r, c);
    printf("Array data: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < r; j++)
        {
            for (int k = 0; k < c; k++)
            {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
    }
}