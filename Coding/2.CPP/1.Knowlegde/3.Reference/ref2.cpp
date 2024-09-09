#include<iostream>
using namespace std;
int main()
{
  int x=10; // x variable
  int &rv=x; // rv is duplicate name of x
   rv=300; // rv and x both are same ,so x value will get changei
   cout << x <<' '<< rv << endl; // printing data
}

