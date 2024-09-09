//initialization of class object ,if class data members are private section
#include<iostream>
using namespace std;
class Family
{
	int cash,gold;
	public:
	Family() {
	cout << "constructor  " << endl;
	cash = 10, gold = 20;
	}
	void get_data() {
		cout << cash << " "<< gold << endl;
	}
};
main()
{
	Family f1;
	f1.get_data(); //printing data
}
// Family f1: internally it calls one member function i.e constructor 
// Family::Family(&f1);
// constructor is having same name as class name and automatically it will call the function when the object is created
//constructor will have this pointer becuase it is a member function

