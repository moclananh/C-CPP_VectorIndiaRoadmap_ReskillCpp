#include <iostream>
using namespace std;

class Decimal
{
private:
    int num;

public:
    Decimal(int n) : num(n) {}

    friend string decimalToBinary(const Decimal &);

    void displayDecimal()
    {
        cout << "Decimal Number: " << num << endl;
    }
};

string decimalToBinary(const Decimal &d)
{
    string binary = "";
    int n = d.num;

    while (n != 0)
    {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }

    return binary;
}

/**
 * @brief
 *
 * @return int
 */
int main()
{
    int decimalNum;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    Decimal d(decimalNum);
    d.displayDecimal();

    cout << "Binary Representation: " << decimalToBinary(d) << endl;

    return 0;
}