#include <iostream>
using namespace std;

class Prime
{
    int num;

public:
    Prime(int n) : num(n) {}
    friend bool isPrime(const Prime &prime);
    friend bool isSumOfTwoNumber(const Prime &prime);
};

bool isPrime(const Prime &prime)
{
    int temp = prime.num;
    if (temp <= 1)
        return false;
    for (int i = 2; i * i <= temp; i++)
    {
        if (temp % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isSumOfTwoNumber(const Prime &prime)
{
    int temp = prime.num;
    for (int i = 2; i < temp / 2; i++)
    {
        if (isPrime(Prime(i)) && isPrime(Prime(temp - i)))
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Prime p(num);
    cout << num << (isSumOfTwoNumber(p) ? " can be expressed as the sum of two prime numbers." : " cannot be expressed as the sum of two prime numbers.") << endl;
    return 0;
}
