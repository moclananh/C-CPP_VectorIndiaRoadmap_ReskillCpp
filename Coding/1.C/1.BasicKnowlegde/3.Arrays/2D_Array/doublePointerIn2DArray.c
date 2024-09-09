#include <stdio.h>

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int *p = arr;
    int **dp = *p;
    printf("%d", *dp);
    printf("%d", **dp);
    return 0;
}
