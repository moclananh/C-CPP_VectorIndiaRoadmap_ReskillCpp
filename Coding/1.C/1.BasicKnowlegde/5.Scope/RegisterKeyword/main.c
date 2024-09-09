#include <stdio.h>

int main()
{
    register int counter;

    for (counter = 0; counter < 10; counter++)
    {
        printf("Counter: %d\n", counter);
    }

    return 0;
}
