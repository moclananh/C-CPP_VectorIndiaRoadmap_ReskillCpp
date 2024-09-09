#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30};
    int *p = arr;

    printf("*p + 1: %d\n", *p + 1);     // Kết quả: 11
    printf("*(p + 1): %d\n", *(p + 1)); // Kết quả: 20

    return 0;
}
