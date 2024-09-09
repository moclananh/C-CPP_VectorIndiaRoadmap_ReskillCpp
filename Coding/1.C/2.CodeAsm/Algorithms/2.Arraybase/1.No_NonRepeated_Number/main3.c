#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, hasNonRepeatedElements = 0;

    // Nhập số lượng phần tử
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("invalid size\n");
        return -1;
    }
    if (n > 50)
    {
        printf("Memory Overflow");
        return -1;
    }
    // Cấp phát bộ nhớ cho mảng đầu vào
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("memory allocation failed\n");
        return 1;
    }

    // Đọc các phần tử của mảng
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("invalid data\n");
            free(arr);
            return 1;
        }
    }

    // Lọc và in các phần tử không trùng lặp
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (j == i) // Phần tử đầu tiên xuất hiện
        {
            int k;
            for (k = i + 1; k < n; k++)
            {
                if (arr[i] == arr[k])
                    break;
            }
            if (k == n) // Phần tử không trùng lặp
            {
                printf("%d ", arr[i]);
                hasNonRepeatedElements = 1; // Đánh dấu rằng đã tìm thấy phần tử không trùng lặp
            }
        }
    }

    if (!hasNonRepeatedElements)
    {
        printf("no non-repeated elements");
    }
    printf("\n");

    // Giải phóng bộ nhớ
    free(arr);

    return 0;
}
