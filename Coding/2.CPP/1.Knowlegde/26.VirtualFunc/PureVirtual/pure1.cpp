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
  public:
  	void test1() {
	cout << "test1 function in derived" << endl;
	}
};
main()
{
Derived d1;
d1.test1();
d1.test2();

}

