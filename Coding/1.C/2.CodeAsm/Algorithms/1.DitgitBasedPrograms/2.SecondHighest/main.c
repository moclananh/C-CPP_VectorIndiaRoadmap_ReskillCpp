#include <stdio.h>

int max2()
{
    int num, max = -1, max2 = -1, digit;
    int isSingle = 0;
    scanf("%d", &num);
    if (num < 0)
    {
        num = -num;
    }
    int originalNum = num;

    while (num > 0)
    {
        digit = num % 10;
        isSingle++;
        if (digit > max)
        {
            max2 = max;
            max = digit;
        }
        else if (digit > max2 && digit != max)
        {
            max2 = digit;
        }

        num /= 10;
    }

    if (isSingle == 1 || isSingle == 0)
        printf("you have supplied single digit only");
    else if (max2 == -1)
        printf("all digits are same");
    else
        printf("%d", max2);
}

int main()
{

    max2();
    return 0;
}