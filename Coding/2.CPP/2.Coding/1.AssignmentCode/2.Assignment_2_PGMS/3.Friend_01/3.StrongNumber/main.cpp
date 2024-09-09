#include <iostream>
using namespace std;

class StrongNum
{
    int number;

public:
    StrongNum(int number) : number(number) {}

    friend bool isStrong(const StrongNum &strongNum);
};

// caculate factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

bool isStrong(const StrongNum &strongNum)
{
    int sum = 0;
    int temp = strongNum.number;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == strongNum.number);
}

main(int argc, char const *argv[])
{
    int min, max;
    cout << "Enter range of numger: ";
    cin >> min >> max;
    cout << "Result: ";
    for (int i = min; i <= max; i++)
    {
        StrongNum n(i);
        if (isStrong(n))
        {
            cout << i << " ";
        }
    }
    return 0;
}
