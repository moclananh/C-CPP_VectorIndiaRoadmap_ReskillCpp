#include<iostream>
using namespace std;
class A
{
char *s1;
public:
	A() {
	s1=new char[20];
	}
	~A() {
	delete [] s1;
	}
};
class B:public A
{
char *s2;
public:
	B() {
	s2=new char[20];
	}
	~B() {
	delete[]s2;
	}

};
class C:public B
{
char *s3;
public:
	C() {
	s3=new char[20];
	}
	~C() {
	delete []s3;
	}

};
main()
{
C c1; //class c object created

}

//constructors will allocate memory 
//destructors will destroy the memory
//no memory leak in this program




