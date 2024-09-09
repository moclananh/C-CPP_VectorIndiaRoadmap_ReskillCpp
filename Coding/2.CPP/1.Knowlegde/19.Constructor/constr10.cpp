//default constrcutor not provided explicilty
#include<iostream>
using namespace std;
class Family
{
	int cash,gold;
	public:
	Family(int,int);
	void get_data();
};
/******* class member function defination outside the class ***/
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
// error because Family f1 object tries to call default constructor.
//but default constructor defination not provided by user explicilty

// whenever user provides any constructor explicitly then compiler will not provide default constructor to class.









