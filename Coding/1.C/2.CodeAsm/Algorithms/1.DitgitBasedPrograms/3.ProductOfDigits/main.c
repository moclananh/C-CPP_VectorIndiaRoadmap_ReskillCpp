#include <stdio.h>

int main()
{

    int num, pro = 1, rem = 0, digit;
    scanf("%d", &num);
    int onum = num;
    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        digit = num % 10;
        pro *= digit;

        num /= 10;
    }
    if (onum < 0)
        printf("%d", -pro);
    else if (onum == 0)
        printf("0");
    else
        printf("%d", pro);
    return 0;
}