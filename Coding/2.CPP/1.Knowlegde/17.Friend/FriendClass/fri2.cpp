//friend class : one class can be friend to another class

#include<iostream>
using namespace std;
class A
{
	int x,y; // data members of class A
	public:
	/*********** member function of class A *****************/
	void set_data() {
		cout << "enter A data " << endl;
		cin >> x >> y;
	}
	friend class B;	 // class B is friend
};
class B
{
int a,b;
	public:
		/*********** member functions of class B ****************/
		void test1(A obj) {
			cout << "test1  " << endl;
			cout << obj.x <<"  "<<  obj.y << endl; //accessing private data of a class A
		}
		void test2(A var) {
			cout << "test2 " << endl;
			cout << var.x <<  " "<< var.y << endl; //accessing prvate data of a class A
		}
		void test3(A app) {
			cout << "test3  " << endl;
			cout << app.x << " "<< app.y << endl; //accessing private data of a class A
		}
};
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




