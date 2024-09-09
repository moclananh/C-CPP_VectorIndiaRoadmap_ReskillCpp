#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Cấp phát bộ nhớ cho mảng 10 số nguyên và khởi tạo tất cả các phần tử về 0
    int *arr = (int *)calloc(10, sizeof(int));
    if (arr == NULL)
    {
        printf("Cấp phát bộ nhớ thất bại\n");
        return 1;
    }

    // Kiểm tra các phần tử đã được khởi tạo về 0
    printf("Các phần tử của mảng sau khi sử dụng calloc:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sử dụng mảng arr
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i * 5;
    }

    // In các phần tử của mảng sau khi gán giá trị mới
    printf("Các phần tử của mảng sau khi gán giá trị mới:\n");
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
