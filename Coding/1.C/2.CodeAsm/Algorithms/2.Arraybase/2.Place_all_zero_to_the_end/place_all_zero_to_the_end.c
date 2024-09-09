#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, *result, nonZeroCount = 0, resultIndex = 0;

    // Read the number of elements
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100)
    {
        printf("invalid size\n");
        return -1;
    }

    // Allocate memory for the input array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("memory allocation failed\n");
        return 1;
    }

    // Allocate memory for the result array
    result = (int *)malloc(n * sizeof(int));
    if (result == NULL)
    {
        printf("memory allocation failed\n");
        free(arr);
        return 1;
    }

    // Read the array elements
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("invalid data\n");
            free(arr);
            free(result);
            return 1;
        }
    }

    // Note: it not working in VPL Compiler
    if (getchar() != '\n')
    {
        printf("Memory Overflow");
        return 1;
    }

    // Move all non-zero elements to the result array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            result[resultIndex++] = arr[i];
            nonZeroCount++;
        }
    }

    // Add the remaining zeros to the end of the result array

    for (int i = 0; i < n - nonZeroCount; i++)
    {
        result[resultIndex++] = 0;
    }

    // Print the result
    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);
    free(result);

    return 0;
}