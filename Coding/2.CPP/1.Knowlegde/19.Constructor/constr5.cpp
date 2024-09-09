// constructor in private section but object not created outside the class
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
Family f1,f2,f3;
f1.get_data();
f2.get_data();
f3.get_data();
}

// if 100 objects are created then constructor will execute 100 times for each object.



