#include <stdio.h>

int main()
{
    int num, rem, count = 0;
    scanf("%d", &num);
    if (num == 0)
    {
        printf("you have supplied zero");
    }
    else
    {
        while (num)
        {
            rem = num % 10;

            if (rem % 2 != 0)
            {
                printf("%d ", rem);
                count++;
            }
            num = num /= 10;
        }
        if (count == 0)
            printf("no odd digits");
    }
}