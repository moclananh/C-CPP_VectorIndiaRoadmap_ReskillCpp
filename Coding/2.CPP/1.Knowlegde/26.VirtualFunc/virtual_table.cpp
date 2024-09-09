//analysis of virtual table
#include<iostream>
using namespace std;
class A
{
public:
	virtual void test1() {   // virtual function
	cout << "test1 in class A" << endl;
	}
	virtual void test2() { // virtual function
	cout << "test2 in class A" << endl;
	}
	void test3() { // non-virtual function
	cout << "test3 in class A" << endl;
	}
};
class B:public A
{
public:
	void test1() {   //virtual function
	cout << "test1 in class B" << endl;
	}
	void test3() { // non-virtual function
	cout << "test3 in class B" << endl;
	}
};
class C:public A
{  
public:
	void test2() { // virtual function 
	cout << "test2 in class C" << endl;
	}
	void test3() { // non-virtual function
	cout << "test3 in class C" << endl;
	}
};
main()
{
A *ptr; // class A base pointer
A a1; // class A base object
ptr=&a1; 
ptr->test1(); // test1 in A
ptr->test2();  // test2 in A
ptr->test3(); // test3 in A

B b1;
ptr=&b1;
ptr->test1(); // test1 in B
ptr->test2();  // test2 in A
ptr->test3(); // test3 in A

C c1;
ptr=&c1;
ptr->test1(); // test1 in A
ptr->test2();  // test2 in C
ptr->test3(); // test3 in A


// by default function binding is compiletime and pointer getting address is runtime,so firts compile time instruction will take.here it will check the pointer type,pointer type is base class so it will check test1() how it is avaiable ? either virtual or non-virtual?, here in base class available as virtual so binding postponed to runtime.
// runtime it will check which object address it was hold,

}

// Note: in base class, if the function is virtual then in derived class ,the overrided function also behaves like  virtual internally.



