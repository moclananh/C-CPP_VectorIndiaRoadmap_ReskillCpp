//nested class
#include<iostream>
using namespace std;
class A
{
	public:
		A() {
			cout << "constructor A" << endl;
		}
		~A() {
			cout << "Destructor A" << endl;
		}
		class B // nested class
		{
			int x;
			public:
				B();
				~B();
				void get_B();
		};
};
/***************class B member function defunations ******************/
				A::B::B() {
					cout << "constructor B" << endl;
				}
				A::B::~B() {
					cout << "Destructor B" << endl;
				}
				void A::B::get_B(){
				cout << "x- " << x << endl;
				}
	
main()
{
//	A obj;
	A::B b1;// b1 is object of class B which is aviailable in class A
	b1.get_B();
}



