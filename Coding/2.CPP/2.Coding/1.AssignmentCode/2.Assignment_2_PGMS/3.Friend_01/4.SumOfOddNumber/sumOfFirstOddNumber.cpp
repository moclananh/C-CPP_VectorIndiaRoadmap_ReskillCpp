#include <iostream>
using namespace std;

class OddNaturalSum;

class OddNatural
{
private:
    int n;

public:
    OddNatural(int num) : n(num) {}

    friend class OddNaturalSum;
};

class OddNaturalSum
{
public:
    int calculateSum(const OddNatural &oddNatural)
    {
        int sum = 0;
        for (int i = 1; i <= oddNatural.n; i++)
        {
            sum += (2 * i - 1);
        }
        return sum;
    }
};

int main()
{
    int n;
    cout << "Enter the number of odd natural numbers to sum: ";
    cin >> n;

    OddNatural oddNatural(n);
    OddNaturalSum oddNaturalSum;

    int sum = oddNaturalSum.calculateSum(oddNatural);

    cout << "Sum of " << n << " odd natural numbers: " << sum << endl;

    return 0;
}