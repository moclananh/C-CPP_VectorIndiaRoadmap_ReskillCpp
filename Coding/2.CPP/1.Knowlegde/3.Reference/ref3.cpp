#include<iostream>
using namespace std;
int main()
{
  int x=10; // x variable
  int &rv; // error because reference variable not refering to any varaible
   rv=300; // rv and x both are same ,so x value will get changei
   cout << x <<' '<< rv << endl; // printing data
}

