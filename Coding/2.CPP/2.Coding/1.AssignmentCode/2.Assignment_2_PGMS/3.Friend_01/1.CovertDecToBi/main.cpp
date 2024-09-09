#include <iostream>
using namespace std;

class Decimal
{
    int number;

public:
    Decimal(int num) : number(num) {}
    ~Decimal() {}
    friend string convetToBinary(const Decimal &dec);
};

string convetToBinary(const Decimal &dec)
{
    int num = dec.number;
    string binary = "";
    while (num != 0)
    {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    Decimal d(num);
    cout << "Converted to binary: " << convetToBinary(d) << endl;
    return 0;
}
