#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000000 // Adjust this based on the maximum possible value in the array

void find_repeated_elements(int *arr, int n)
{
    int min_val = arr[0], max_val = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min_val)
            min_val = arr[i];
        if (arr[i] > max_val)
            max_val = arr[i];
    }

    int range = max_val - min_val + 1;
    int *count = (int *)calloc(range, sizeof(int));
    if (count == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    // Count occurrences of each element
    for (int i = 0; i < n; i++)
    {
        count[arr[i] - min_val]++;
    }

    // Print elements that appear more than once
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (count[arr[i] - min_val] > 1)
        {
            printf("%d ", arr[i]);
            count[arr[i] - min_val] = 0; // Mark as printed to avoid duplicates
            found = 1;
        }
    }

    if (!found)
    {
        printf("No repeated elements");
    }
    printf("\n");

    free(count);
}

int main()
{
    int n;

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

    // Find and print repeated elements
    find_repeated_elements(arr, n);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}