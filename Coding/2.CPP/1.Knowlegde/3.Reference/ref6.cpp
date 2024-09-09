#include<iostream>
using namespace std;
int main()
{
const int x=10; //  x is const
const int &rv=x; // rv is reference and pointing to const x
rv=80;
cout << x << " " << rv << endl;
//rv=200; // compile time error, rv is reference to const
//x=200; //compile time error,x is integer const
}
