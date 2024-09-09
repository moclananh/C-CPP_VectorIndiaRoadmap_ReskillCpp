//compiler provides constructor defination
#include<iostream>
using namespace std;
class Family
{
	int cash,gold;
	public:
	Family();
	Family(int,int);
	void get_data();
};
/******* class member function defination outside the class ***/
Family::Family() {
	cout << "default constructor " << endl;
	cin>> cash >> gold;
}
Family::Family(int a,int b) {
	cout << "parametrized " << endl;
	cash = a,gold = b;
}
void Family::get_data() {
	cout << cash << " "<< gold << endl;
}

main()
{
	Family f1,f2(10,20);
	f1.get_data();
	f2.get_data();
}
//Family f1: object calls default constructor
//Family f2(10,20) : internally compiler will call the constructor like
//Family::Family(&f2,10,20); // called parametrized constructor
//becuase we are passing the values 10,20










