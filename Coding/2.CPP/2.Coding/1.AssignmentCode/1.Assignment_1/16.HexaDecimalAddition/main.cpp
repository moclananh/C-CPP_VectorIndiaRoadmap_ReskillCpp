#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string decimalToHexadecimal(int n)
{
    stringstream ss;
    ss << hex << n;
    return ss.str();
}

int hexadecimalToDecimal(string hex_string)
{
    int decimal = 0;
    stringstream ss;
    ss << hex << hex_string;
    ss >> decimal;
    return decimal;
}

string addHexadecimalNumbers(string hex_a, string hex_b)
{
    int decimal_a = hexadecimalToDecimal(hex_a);
    int decimal_b = hexadecimalToDecimal(hex_b);
    int sum_decimal = decimal_a + decimal_b;
    return decimalToHexadecimal(sum_decimal);
}

int main()
{
    int a, b;
    cout << "Enter first decimal number: ";
    cin >> a;
    cout << "Enter second decimal number: ";
    cin >> b;

    // Convert decimal to hexadecimal
    string hex_a = decimalToHexadecimal(a);
    string hex_b = decimalToHexadecimal(b);

    // Perform hexadecimal addition
    string result = addHexadecimalNumbers(hex_a, hex_b);

    cout << "The sum of the two hexadecimal numbers is: " << result << endl;

    return 0;
}