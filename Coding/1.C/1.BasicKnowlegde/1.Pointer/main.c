#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **dp, r, c;
    printf("Enter row and col: ");
    scanf("%d %d", &r, &c);
    // memory allocation based on row = size
    dp = (int **)malloc(r * sizeof(int *));

    // memory allocation based on col size
    for (int i = 0; i < r; i++)
    {

        dp[i] = (int *)malloc(c * sizeof(int));
    }

    // inputdata into array
    printf("Enter data is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &dp[i][j]);
    }

    printf("Entered data is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }

    free(dp);
}