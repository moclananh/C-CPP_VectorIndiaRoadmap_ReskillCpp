#include <stdio.h>
#include <stdlib.h>

void findLeaders(int arr[], int n)
{
    int *leaders = (int *)malloc(n * sizeof(int));
    int count = 0;
    int max_from_right = arr[n - 1];

    // last element is always a leader
    leaders[count++] = max_from_right;

    // From right to left to find the leaders
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= max_from_right) // Changed > to >=
        {
            max_from_right = arr[i];
            leaders[count++] = max_from_right;
        }
    }

    // print leaders from left to right
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", leaders[i]);
    }
    printf("\n");

    free(leaders);
}

int main()
{
    int n;

    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input 0\n");
        return -1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("malloc error\n");
        return -1;
    }

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find and print leaders in the array
    findLeaders(arr, n);

    // Free allocated memory
    free(arr);
    return 0;
}