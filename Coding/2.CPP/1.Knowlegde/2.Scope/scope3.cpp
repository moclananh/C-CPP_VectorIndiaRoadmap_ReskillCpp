#include <iostream>
using namespace std;
main()
{
	int x = 100; // local variable
	{
		int x = 1000; // local variable to block
		cout << "x - " << x << endl;
		// cout << "::x - " << ::x << endl; // error: because always global variable means outside main function
	}
}

//:: always accessing global variable which is declared outside main function
