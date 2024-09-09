#include <stdio.h>
#include "mylib.h"

int main(int argc, char const *argv[])
{
    printf("sqrt of 10: %lf\n", sqrt(10));
    printf("2 pow 2: %lf\n", my_pow(2, 2));
    printf("factorial of 10: %lld\n", factorial(10));
    printf("quare: %lf\n", square(12.0));
    printf("cube: %lf\n", cube(12.0));
    return 0;
}
