#include<iostream>
using namespace std;
int main()
{
  int x=10; // x variable
  int &rv=x; // rv is duplicate name of x
  cout << x << " "<< rv << endl; // printing data
  cout << &x << " " << &rv << endl; // printing address,by default hexa
  cout << (unsigned long )&x << " "<< (unsigned long) &rv << endl; // printing address in unsigned format
}

