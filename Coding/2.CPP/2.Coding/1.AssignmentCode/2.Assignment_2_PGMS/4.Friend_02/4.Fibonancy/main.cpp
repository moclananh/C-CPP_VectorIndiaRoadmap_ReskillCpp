#include <iostream>
using namespace std;

class Number
{
    int number;

public:
    Number(int num) : number(num) {}
    friend void findFibonancy(const Number &n);
};

void findFibonancy(const Number &n)
{
    int a = 0;
    int b = 1;
    int next = 0;
    for (int i = 0; i < n.number; i++)
    {
        cout << next << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Number num(n);
    findFibonancy(n);
    return 0;
}
