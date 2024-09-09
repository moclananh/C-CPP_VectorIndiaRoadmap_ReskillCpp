#include<iostream>
using namespace std;
int x=10; //global varaiable
main()
{
	int x=100; //local variable
	{
		int x=1000; //local variable to block 
		cout << "x - " << x << endl;
		cout << "::x - " << ::x << endl; // always global variable means outside main function
	}

}

//x value 100 will not print because it is also one local variable to main
// there is no method to print x value 100 inside block

