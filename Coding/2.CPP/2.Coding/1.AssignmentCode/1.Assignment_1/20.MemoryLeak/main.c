#include <stdio.h>
#include <stdlib.h>

void allocate_memory()
{
    // Allocate memory for 100 integers
    int *arr = (int *)malloc(100 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    // Use the allocated memory
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i * i;
    }

    // Print first and last elements
    printf("First element: %d, Last element: %d\n", arr[0], arr[99]);

    // Forgetting to free the memory (causing a memory leak)
    // Uncomment the following line to fix the leak:
    // free(arr);
}

int main()
{
    allocate_memory();
    return 0;
}
