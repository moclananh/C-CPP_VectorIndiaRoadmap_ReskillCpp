#include <stdio.h>

int main()
{
    int num, highest = 0, lowest = 9, digit, temp;
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        temp = temp / 10;
        if (digit > highest)
        {
            highest = digit;
        }
        if (digit < lowest)
        {
            lowest = digit;
        }
    }
    if (highest == lowest)
    {
        printf("all digits are same");
    }
    else
    {
        printf("highest: %d, lowest: %d", highest, lowest);
    }
    return 0;
}