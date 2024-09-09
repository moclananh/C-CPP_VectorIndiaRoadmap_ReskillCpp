#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int SumOfNumberInString(const string &str)
{
    int sum = 0;
    int currentNum = 0;
    for (char c : str)
    {
        if (isdigit(c))
        {
            currentNum = currentNum * 10 + (c - '0');
        }
        else if (currentNum != 0)
        {
            sum += currentNum;
            currentNum = 0;
        }
    }

    // add the last number to sum
    if (currentNum != 0)
    {
        sum += currentNum;
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int sum = SumOfNumberInString(str);
    cout << "Result: " << sum << endl;
    return 0;
}
