// constructor in private section
#include<iostream>
using namespace std;
class Family
{
	int cash,gold;
	Family() {
	cout << "constructor  " << endl;
	cash = 10, gold = 20;
	}
	public:
	void get_data() {
		cout << cash << " "<< gold << endl;
	}
};
main()
{
	Family f1; // error 
	f1.get_data(); //printing data
}
// Family f1: internally it calls one member function i.e constructor  in main function like below
// Family::Family(&f1);
//constructor is private section ,so can't be accessed in main

