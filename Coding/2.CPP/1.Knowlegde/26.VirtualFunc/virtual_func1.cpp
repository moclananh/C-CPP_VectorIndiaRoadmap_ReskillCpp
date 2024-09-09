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
A *aptr; // base class pointer
B b1; //derived class object
aptr=&b1; //base class pointer holding derived class object
aptr->test1(); // here test1 in B will execute
}

//here access specifier will check from pointer type i.e class A 
//and accessing test1() address from vtable of class B
//in class A ,test1 is virtual and avaible in public section ,so same rules will be applicable for derived class test1 with respect to base class pointer.


