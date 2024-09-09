#include <stdio.h>
#include <stdlib.h>
#define ROWS 4
#define COLS 4
void printMatrix(int matrix[ROWS][COLS]);
int main()
{

    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    printMatrix(matrix);

    return 0;
}

void printMatrix(int matrix[ROWS][COLS])
{
    int top = 0, bottom = ROWS - 1, left = 0, right = COLS - 1;

    while (top <= bottom && left <= right)
    {
        // Print top row
        for (int i = left; i <= right; i++)
        {
            printf("%d ", matrix[top][i]);
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++)
        {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Print bottom row
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        // Print left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}