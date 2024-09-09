#include <stdio.h>

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    // Truy cập và in các phần tử của mảng

    int r = sizeof(arr) / sizeof(arr[0]);
    int c = sizeof(arr[0]) / sizeof(arr[0][0]);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
