//particular member function of a class made friend to another class
#include<iostream>
using namespace std;
class A; // forward declarartion
class B
{
	int a,b;
	public:
	void test1(A);
	void test2(A);
	void test3(A);
};
class A
{
	int x,y; // data members of class A
	public:
	void set_data();
	friend void B::test2(A); //friend function 
//	friend void B::test1(A); //friend function 

};
/********* member function defination  of class A **********/
void A::set_data() {
	cout << "enter A data " << endl;
	cin >> x >> y;
}
/*********** member function definations  of class B ****************/
void B::test1(A obj) {
	cout << "test1  " << endl;
//		cout << obj.x <<"  "<<  obj.y << endl; //accessing private data of a class A
}
void B::test2(A var) {
	cout << "test2 " << endl;
	cout << var.x <<  " "<< var.y << endl; //accessing prvate data of a class A
}
void B::test3(A app) {
	cout << "test3  " << endl;
//		cout << app.x << " "<< app.y << endl; //accessing private data of a class A
}
/**************** non member function  ****************/
main()
{
	A a1;
	a1.set_data(); // function call
	B b1;
	b1.test1(a1); //function call
	b1.test2(a1); //function call
	b1.test3(a1); //functon call
}

//class A granted the permission to class B,
//so class B all the member functions can access private data of class A

//class B not granted friend permissions to class A
//so class A, can't access private data of class B




