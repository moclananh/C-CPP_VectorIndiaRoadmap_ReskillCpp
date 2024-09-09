#include <stdio.h>
#include <string.h>
void fibonancy(int start, int end)
{
    int t1 = 0, t2 = 1, next_item;
    while (t1 <= end)
    {
        if (t1 >= start)
        {
            printf("%d ", t1);
        }
        next_item = t1 + t2;
        t1 = t2;
        t2 = next_item;
    }
}

int main()
{
    int start, end;
    scanf("%d %d", &start, &end);
    fibonancy(start, end);
    return 0;
}