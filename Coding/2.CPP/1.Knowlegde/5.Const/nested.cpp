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
				B() {
					cout << "constructor B" << endl;
				}
				~B() {
					cout << "Destructor B" << endl;
				}
				void get_B(){
				cout << "x- " << x << endl;
				}
		};
};
main()
{
//	A obj;
	A::B b1;// b1 is object of class B which is aviailable in class A
	b1.get_B();
}



