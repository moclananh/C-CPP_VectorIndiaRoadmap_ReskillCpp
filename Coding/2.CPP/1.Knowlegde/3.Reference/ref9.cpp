#include<iostream>
using namespace std;
int main()
{
 int x=10,y=30; //  x is variable
 int &rv=x; // rv is duplicate name for x
 cout << x << " "<< rv << endl; //printing x and rv
 rv=y; // changing rv value (it's equalent to rv=30)
 cout << x << " "<< rv << endl; // printing x and rv

 }

 // in this program x=y possible, in the same way rv=y
 // y value storing in rv
