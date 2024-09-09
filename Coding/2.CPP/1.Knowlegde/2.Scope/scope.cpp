#include<iostream>
using namespace std;
int x=10;// global variable
main()
{ 
	int x=100;// local variable
	cout << "local x :" << x << endl;
	cout <<" global x :" << ::x << endl;
}
//local variable is highest priority compared with global variable 

// in c ,not possible to print global variable ,if local and global variables having same name
//in c++ ,use scope resolution opeartor(::) to get global value
