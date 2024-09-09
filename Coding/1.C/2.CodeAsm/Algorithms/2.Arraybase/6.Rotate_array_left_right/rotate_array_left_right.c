#include <stdio.h>
#include <stdlib.h>
void rotateRight(int arr[], int size)
{
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

void rotateLeft(int arr[], int size)
{
    int first = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = first;
}

int main()
{
    int SIZE;
    scanf("%d", &SIZE);

    int a[100];
    for (int i = 0; i < abs(SIZE); i++)
    {
        scanf("%d", &a[i]);
    }

    char choice;
    scanf(" %c", &choice); // note "_%c" space here

    int nOR;
    scanf("%d", &nOR);

    if (SIZE <= 0)
    {
        printf("No of elements are invalid\n");
        return 0;
    }

    while (nOR > 0)
    {
        if (choice == 'r')
        {
            rotateRight(a, SIZE);
        }
        else if (choice == 'l')
        {
            rotateLeft(a, SIZE);
        }
        nOR--;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
