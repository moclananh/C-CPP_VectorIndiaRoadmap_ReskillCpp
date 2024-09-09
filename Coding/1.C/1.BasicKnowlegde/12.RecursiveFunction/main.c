#include <stdio.h>

// Hàm đệ quy tính giai thừa
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); // Gọi đệ quy
    }
}

int main()
{
    int number = 5;
    printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}
