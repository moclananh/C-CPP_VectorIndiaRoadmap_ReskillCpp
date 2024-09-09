#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int(*ptr)[5] = &arr; // ptr là con trỏ trỏ đến một mảng gồm 5 phần tử

    // In các phần tử của mảng thông qua con trỏ
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", (*ptr)[i]);
    }

    return 0;
}
