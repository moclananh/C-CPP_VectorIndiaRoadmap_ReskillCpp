#include <stdio.h>
#include <stdlib.h>

int max_sum_subarray(int *arr, int n, int k)
{
    if (n < k)
    {
        return -1; // Invalid case
    }

    // Compute sum of first subarray of size k
    int window_sum = 0;
    for (int i = 0; i < k; i++)
    {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    // Compute sums of remaining subarrays by sliding the window
    for (int i = k; i < n; i++)
    {
        window_sum = window_sum - arr[i - k] + arr[i];
        if (window_sum > max_sum)
        {
            max_sum = window_sum;
        }
    }

    return max_sum;
}

int main()
{
    int n, k;

    // Read the number of elements in the array
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read the array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read the size of the subarray
    scanf("%d", &k);

    // Calculate and print the result
    int result = max_sum_subarray(arr, n, k);
    printf("%d\n", result);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}