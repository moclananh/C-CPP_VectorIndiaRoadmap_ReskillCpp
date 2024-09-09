//virtual destructor defination: virtual destructor is a destructor which is defined in base class and it is used to get the proper destructor calls from derived class to base class,when the base class pointer points to derived class dynamic object.

//virtual destructor ensure that the object resources are released in the reverse order of the object being constructed with respect to inherited object.

#include<iostream>
using namespace std;
class A
{
char *s1;
public:
	A() {
	cout << "constructor A" << endl;
	s1=new char[20];
	}
	virtual	~A() {
	cout << "destructor A" << endl;
	delete [] s1;
	}
};
class B:public A
{
char *s2;
public:
	B() {
	cout << "constructor B" << endl;
	s2=new char[20];
	}
	~B() {
	cout << "destructor B" << endl;
	delete[]s2;
	}

};
class C:public B
{
char *s3;
public:
	C() {
	cout << "constructor C" << endl;
	s3=new char[20];
	}
	~C() {
	cout << "destructor C" << endl;
	delete []s3;
	}

};
main()
{
A *aptr; //base class A pointer
aptr=new C; //holding class C dynamic object
delete aptr;
}
// whenever dynamic object is created for class C object.it will call the constructors A,B,C
//destructors will  be be executed only A,because dynamic object  deleted.
//here B and C destructors will not execute,becuase 
//while compiling ,by default function binding happend at compile time.
//so "aptr" pointer not getting valid address at compile time and destructro also a member function so binding required at compile time.

//here it will check the pointer type? pointer type is class A ,it will check class A destructor how it is available? either virtual, or non-virtual ,if non -virtual then binding will be done at compile time with class A destructor ,so class A destructro will execute.

// here class A destructor is virtual ,so it will go for runtime function binding and will che ck which object it was hold.
//class A pointer holding class c object so it will call class C destructor then class B destructor then class A destructor.


//finally memory deleted so no memory leak






