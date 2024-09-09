#include <stdio.h>
#include <stdlib.h>

void rotateRight(int arr[], int n, int k)
{
    // Normalize k to prevent unnecessary full rotations
    k = k % n;

    // Allocate memory for the temporary array
    int *temp = (int *)malloc(n * sizeof(int));
    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    // Copy rotated elements to the temporary array
    for (int i = 0; i < n - k; i++)
    {
        temp[i + k] = arr[i];
    }

    // Set remaining elements to 0
    for (int i = 0; i < k; i++)
    {
        temp[i] = 0;
    }

    // Copy the rotated and zero-filled elements back to the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    // Free allocated memory
    free(temp);
}

void rotateLeft(int arr[], int n, int k)
{
    // Normalize k to prevent unnecessary full rotations
    k = k % n;

    // Allocate memory for the temporary array
    int *temp = (int *)malloc(n * sizeof(int));
    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    // Copy rotated elements to the temporary array
    for (int i = k; i < n; i++)
    {
        temp[i - k] = arr[i];
    }

    // Set remaining elements to 0
    for (int i = n - k; i < n; i++)
    {
        temp[i] = 0;
    }

    // Copy the rotated and zero-filled elements back to the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    // Free allocated memory
    free(temp);
}

int main()
{
    int n, k;
    char choice;

    // Read the number of array elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read the array elements
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read the choice for left or right rotation
    printf("Enter the choice for rotation (r for right, l for left): ");
    getchar(); // To consume the newline character left by previous input
    scanf("%c", &choice);

    // Read the number of times to rotate
    printf("Enter the number of times to rotate: ");
    scanf("%d", &k);

    // Normalize the number of rotations
    k = k % n;

    // Perform the rotation based on the choice
    if (choice == 'r')
    {
        rotateRight(arr, n, k);
    }
    else if (choice == 'l')
    {
        rotateLeft(arr, n, k);
    }
    else
    {
        printf("Invalid choice\n");
        free(arr);
        return 1;
    }

    // Print the rotated array
    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
