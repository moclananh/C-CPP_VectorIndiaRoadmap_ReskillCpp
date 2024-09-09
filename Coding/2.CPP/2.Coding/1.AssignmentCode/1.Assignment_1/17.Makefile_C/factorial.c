#include "mylib.h"
unsigned long long factorial(int n)
{
    if (n < 0)
        return 0; // Factorial is not defined for negative numbers
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}