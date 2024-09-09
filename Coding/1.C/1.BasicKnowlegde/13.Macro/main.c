#include <stdio.h>

#define MAX 100
#define PI 3.14
#define SQUARE(x) ((x) * (x))

int main()
{
    int a = 5;
    printf("Max value: %d\n", MAX);
    printf("Pi value: %.2f\n", PI);
    printf("Square of %d: %d\n", a, SQUARE(a));
    return 0;
}
