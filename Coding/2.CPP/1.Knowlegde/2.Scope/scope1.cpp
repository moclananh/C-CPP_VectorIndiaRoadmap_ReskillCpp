#include<iostream>
using namespace std;
main()
{ 
	int x=100;// local variable
	cout << "local x :" << x << endl;//printig local
	cout <<" global x :" << ::x << endl; //this line geneates compile time error  because global variable x not available
}
