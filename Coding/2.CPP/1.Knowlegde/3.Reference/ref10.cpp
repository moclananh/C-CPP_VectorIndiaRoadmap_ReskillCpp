#include<iostream>
using namespace std;
int main()
{
 int x=10,y=30; //  x is variable
 int &rv=x; // rv is duplicate name for x
 int &rv=y; //error: redclaration error:  rv is duplicate name for y
cout << x << " "<< rv << endl; //printing x and rv

}
