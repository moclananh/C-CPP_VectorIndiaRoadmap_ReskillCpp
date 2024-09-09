#include<iostream>
using namespace std;
int main()
{
	int x=10; // x is a variable
	int &rv1=x; //rv1 is duplicate name for x
	int &rv2=rv1; //rv2 also duplicate name for rv1(indirectly duplicate for x)
	int &rv3=rv2;//rv3 also duplicate name for rv2(indirectly duplicate for x)
	cout << rv1 << " "<< rv2 << " "<< rv3 << " " << x << endl;
}

//u can create n no of duplicate names
