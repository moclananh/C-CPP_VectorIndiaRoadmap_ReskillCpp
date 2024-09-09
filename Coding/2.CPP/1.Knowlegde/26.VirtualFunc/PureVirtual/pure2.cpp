//pure virtual functions
#include<iostream>
using namespace std;
class Base // Abstract class
{
public:
	virtual void test1()=0; // pure virtual function, no defination in base 
	virtual void test2() { // virtual function
	cout << "test2 in base" << endl;
	}
};
class Derived:public Base
{
// derived class also behaves like abstract class because there is no defination provided for pure virtual function  test1() in derived class
};
main()
{
Derived d1; //error
}



