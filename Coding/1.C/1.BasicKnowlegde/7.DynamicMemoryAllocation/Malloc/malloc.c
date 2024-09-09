// wap to read multiple names in a data base?
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *p;

    printf("enter number of value: \n");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    if (p == NULL)
    {
        return 0;
    }

    printf("enter value: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]); // p+i same
    }

    printf("data value: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", p[i]);
    }
    free(p);
    p = NULL; // Avoid Dangling Pointer
}