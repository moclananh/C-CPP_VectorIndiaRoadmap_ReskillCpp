#include<iostream>
using namespace std;

class A
{
	public:
		virtual void test1() {
			cout << "test1 in A" << endl;
		}

};
class B:public A
{
	void test1() { //virtual function becuase in base class function is virtual
		cout << "test1 in B" << endl;
	}
};
main()
{
B b1;
b1.test1(); // error because test1() aviable in private section 



}

