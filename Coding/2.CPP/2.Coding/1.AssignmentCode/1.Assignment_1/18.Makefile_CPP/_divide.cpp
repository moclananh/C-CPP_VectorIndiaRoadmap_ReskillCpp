#include "mylib.h"
#include <iostream>
double divide(double a, double b)
{
    if (b == 0)
    {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}
