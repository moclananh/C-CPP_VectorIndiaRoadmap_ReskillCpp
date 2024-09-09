#include <stdio.h>

int main()
{

    int x = 10;
    {
        int x = 20; // can declare same name but in difference scope
        printf("x local = %d ", x);
    }

    printf("x global = %d ", x);
}