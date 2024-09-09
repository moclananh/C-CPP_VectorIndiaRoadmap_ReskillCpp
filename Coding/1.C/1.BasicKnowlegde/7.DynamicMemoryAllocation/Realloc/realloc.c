#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Cấp phát bộ nhớ cho mảng 5 số nguyên
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL)
    {
        printf("Cấp phát bộ nhớ thất bại\n");
        return 1;
    }

    // Gán giá trị ban đầu cho mảng
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i * 2;
    }

    // In các phần tử của mảng ban đầu
    printf("Array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Thay đổi kích thước của mảng lên 10 phần tử
    int *temp = (int *)realloc(arr, 10 * sizeof(int));
    if (temp == NULL)
    {
        printf("Thay đổi kích thước bộ nhớ thất bại\n");
        free(arr); // giải phóng bộ nhớ ban đầu
        return 1;
    }
    arr = temp;

    // Gán giá trị cho các phần tử mới
    for (int i = 5; i < 10; i++)
    {
        arr[i] = i * 2;
    }

    // In các phần tử của mảng sau khi thay đổi kích thước
    printf("After changes:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Giải phóng bộ nhớ khi không còn cần sử dụng mảng nữa
    free(arr);
    arr = NULL; // đặt con trỏ về NULL để tránh truy cập vô ý vào vùng nhớ đã giải phóng

    return 0;
}
