#include "mathfun.h"
#include <stdbool.h>

int check_prime(int data)
{
    if (data <= 1)
        return 0; // 1 and below are not prime
    for (int i = 2; i * i <= data; i++)
    {
        if (data % i == 0)
            return 0; // If divisible, not prime
    }
    return 1; // If no divisors found, it's prime
}

int test_digit(int data)
{
    while (data > 0)
    {
        if (data % 10 == 3)
            return 1; // If any digit is 3, return true
        data /= 10;
    }
    return 0; // If no 3 found, return false
}

int test_descend(int data)
{
    int last_digit = -1; // Start with -1 as no digit can be smaller
    while (data > 0)
    {
        int current_digit = data % 10;
        if (current_digit < last_digit)
            return 0; // If not descending or equal, return false
        last_digit = current_digit;
        data /= 10;
    }
    return 1; // If all digits were descending or equal, return true
}

int test_ascend(int data)
{
    int last_digit = 10; // Start with 10 as no digit can be larger
    while (data > 0)
    {
        int current_digit = data % 10;
        if (current_digit > last_digit)
            return 0; // If not ascending or equal, return false
        last_digit = current_digit;
        data /= 10;
    }
    return 1; // If all digits were ascending or equal, return true
}