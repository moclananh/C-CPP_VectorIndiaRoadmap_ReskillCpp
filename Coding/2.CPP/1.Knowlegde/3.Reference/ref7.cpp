#include<iostream>
using namespace std;
int main()
{
 int x=10; //  x is variable
const int &rv=x; // rv is reference and pointing to const x
x=400;
//rv=200; //error
cout << x << " " << rv << endl;
}

// in this program x can be modify but with respect to rv can't be modified because rv is reference to integer const
// here x is not const
