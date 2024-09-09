#include<iostream>
using namespace std;
int main()
{
	int x=10; // x is a variable
	int &rv1=x; //rv1 is duplicate name for x
	//int &&rv2=rv1; // error
}

//reference variable doesn't have any physcial address.
// so no special reference variable required to refer to reference variable
