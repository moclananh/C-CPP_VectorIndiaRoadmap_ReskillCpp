#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    // Khai báo một mảng của con trỏ tới số nguyên
    int *arr[] = {&a, &b, &c};

    // In giá trị của các biến thông qua con trỏ
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *arr[i]);
    }

    return 0;
}
