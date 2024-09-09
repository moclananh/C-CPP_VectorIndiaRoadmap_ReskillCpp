#include <stdio.h>

int main()
{
    char buffer[50];
    int num = 10;
    sprintf(buffer, "The value of num is %d", num);
    printf("buffer: %s\n", buffer);
    return 0;
}

/*
In this example, the sprintf function is
used to format the string "The value of num is 10"
and store it in the buffer array. The formatted
string is then printed to the console using printf.
*/