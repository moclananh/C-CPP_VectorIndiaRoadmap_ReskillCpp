#include <iostream>

using namespace std;

typedef struct
{

    void getdata()
    {
        cout << "Enter the value of a: ";
    }
} S;

int main()
{
    S s;

    cout << sizeof(s);
}