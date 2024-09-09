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
C *cptr; //class C pointer
cptr=new C; //holding class C dynamic object
delete cptr;
}
// whenever dynamic object is created for class C object.it will call the constructors
//destructors will  be executed ,because dynamic object deleted.
//finally no memory leak

