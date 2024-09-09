#include<iostream>
using namespace std;
int main()
{
 int x=10; //  x is variable
//  int &rv=100; // error ,not possible to provide alias for const
 const int &rv=100; // valid,becuase LHS and RHS both are const
 cout << x << " "<< rv << endl;

 }
