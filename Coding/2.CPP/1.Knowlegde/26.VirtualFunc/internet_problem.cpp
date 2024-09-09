#include<iostream>
using namespace std;
class Base
{
public:
	virtual   void test() {
	cout << "test function in base" << endl;
	}
	Base() {
	cout << "base class constructor" << endl;
	cout << this << endl;
	test();
	}
};
class Derived:public Base
{

	public:
		Derived() {
			cout << "derived class constructor" << endl;
			cout << this << endl;
		}
		void test() {
		cout << "test in derived clasS" << endl;
		}
};
main()
{
Derived d1;

}
