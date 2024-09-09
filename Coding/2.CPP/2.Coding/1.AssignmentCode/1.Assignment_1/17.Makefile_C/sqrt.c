#include "Mylib.h"
double sqrt(double x)
{
    if (x < 0)
        return -1; // Return -1 for negative inputs as square root is not defined
    double tolerance = 1e-10;
    double guess = x;
    while ((guess * guess - x) > tolerance || (x - guess * guess) > tolerance)
    {
        guess = (guess + x / guess) / 2;
    }
    return guess;
}
