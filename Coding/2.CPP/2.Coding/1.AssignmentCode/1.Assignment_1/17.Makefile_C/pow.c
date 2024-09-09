#include "mylib.h"
double my_pow(double base, int exp)
{
    if (exp < 0)
        return 1.0 / my_pow(base, -exp); // Handle negative exponents
    double result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}