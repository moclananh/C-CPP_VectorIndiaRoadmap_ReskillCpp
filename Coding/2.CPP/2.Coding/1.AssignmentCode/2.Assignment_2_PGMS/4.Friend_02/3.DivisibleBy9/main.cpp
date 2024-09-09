#include <iostream>
using namespace std;

class Number
{
    int min;
    int max;

public:
    Number(int min, int max) : min(min), max(max) {}
    friend void sumOfDivisibleByNine(const Number &n);
};

void sumOfDivisibleByNine(const Number &n)
{
    int sum = 0;
    int count = 0;
    for (int i = n.min; i <= n.max; i++)
    {
        if (i % 9 == 0)
        {
            count++;
            sum += i;
        }
    }
    cout << "Number of numbers divisible by 9 is: " << count << endl;
    cout << "Sum of all numbers divisible by 9 is: " << sum << endl;
}

int main(int argc, char const *argv[])
{
    int min = 100, max = 200;
    Number n(min, max);
    sumOfDivisibleByNine(n);
    return 0;
}