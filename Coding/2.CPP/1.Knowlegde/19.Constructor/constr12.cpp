//member variable initalization
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
Family:: Family():cash(10),gold(20) { // member variable initalizatiom
	cout << "default" << endl;
	//cash=10,gold=20;
}
Family::Family(int a,int b):cash(a),gold(b) { // member variable initalization
	cout << "parametrized " << endl;
	//cash = a,gold = b; //assignment in constructor
}
void Family::get_data() {
	cout << cash << " "<< gold << endl;
}

main()
{
	Family f1,f2(100,200);
	f1.get_data();
	f2.get_data();
}


//member variable initalization possible only through constructor.
//member variable initalization not possible by using member function.


