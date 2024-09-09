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
	~A() {
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

//check virtual_des.cpp 




