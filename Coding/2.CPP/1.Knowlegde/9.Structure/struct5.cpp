#include<iostream>
using namespace std;
class st 
{

/******** data members***********/
	int x;
	int y;
	/*********member functions ********/
	void test1() {
		cout << "test1 func" << endl;
	}
	void test2() {
		cout << "test2 func" << endl;
	}
};
/************** non member function *********/
main()
{
 st s; // s is object
 cout << s.x << " "<< s.y << endl;
 s.test1();
 s.test2();
}

// here all the members are available in priavte  section .
//not possible to access outside

