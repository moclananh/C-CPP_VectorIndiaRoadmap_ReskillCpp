//compiler provides constructor defination
#include<iostream>
using namespace std;
class Family
{
	int cash,gold;
	public:
	void get_data();
};
/******* class member function defination outside the class ***/
void Family::get_data() {
	cout << cash << " "<< gold << endl;
}

main()
{
	Family f1,f2,f3;
	f1.get_data();
	f2.get_data();
	f3.get_data();
}

// if user not provided default constructor then compiler will provide the defination of constructor like below
//Family::Family() {}










