#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int min, max;
    scanf("%d %d", &max, &min);
    for (int i = max; i >= min; i--)
    {
        if (isPrime(i) && (i % 10 == 3 || i % 10 == 7))
        {
            printf("%d ", i);
        }
    }
    return 0;
}