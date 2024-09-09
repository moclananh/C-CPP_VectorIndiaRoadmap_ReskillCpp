#include <stdio.h>
#include "mathfun.h"

int main()
{
    printf("Prime numbers between 100 and 1000 that contain the digit 3 and have digits in non-descending or non-ascending order:\n");

    int first = 1;
    for (int i = 100; i <= 1000; i++)
    {
        if (check_prime(i) && test_digit(i) && (test_ascend(i) || test_descend(i)))
        {
            if (!first)
            {
                printf(",");
            }
            printf("%d", i);
            first = 0;
        }
    }
    return 0;
}