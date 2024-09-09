#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number, digit, nextDigit;
    int count[10] = {0};
    int nonRepeatedDigits[10] = {0};
    int nonRepeatedCount = 0;
    int allRepeated = 1; // Assume all digits are repeated unless proven otherwise

    scanf("%d", &number);
    if (number == 0)
    {
        printf("0");
        return -1;
    }

    // Count the occurrence of each digit
    while (number != 0)
    {
        digit = abs(number % 10);
        count[digit]++;
        number /= 10;

        // Check if the next digit is different
        if (number != 0)
        {
            nextDigit = abs(number % 10);
            if (digit != nextDigit)
            {
                allRepeated = 0; // At least one pair of consecutive digits is different
                if (count[digit] == 1)
                {
                    nonRepeatedDigits[nonRepeatedCount++] = digit;
                }
            }
        }
    }

    // Handle the last digit
    if (count[digit] == 1 && allRepeated)
    {
        nonRepeatedDigits[nonRepeatedCount++] = digit;
    }

    // Print the result
    if (nonRepeatedCount == 0 && allRepeated)
    {
        printf("no repeated num\n");
    }
    else
    {
        for (int i = 0; i < nonRepeatedCount; i++)
        {
            printf("%d ", nonRepeatedDigits[i]);
        }
        printf("\n");
    }

    return 0;
}
