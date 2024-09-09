#include <iostream>
#include <string>
using namespace std;

class Number
{
private:
    string num;

public:
    Number(string n) : num(n) {}
    friend string octolToBinary(const Number &num);
};

string octolToBinary(const Number &n)
{
    string octal = n.num;
    for (char c : octal)
    {
        if (c < '0' || c > '7')
        {
            throw invalid_argument("Invalid octal number");
        }
    }

    // Convert the octal number to decimal
    int decimal = stoi(octal, nullptr, 8);
    string binary;
    while (decimal > 0)
    {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return binary;
}

int main()
{
    string octal;
    cout << "Enter a octal number: ";
    cin >> octal;
    Number d(octal);
    cout << "Binary Representation: " << octolToBinary(d) << endl;

    return 0;
}