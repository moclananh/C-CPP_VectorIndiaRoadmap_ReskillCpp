// constructor in private section but object not created outside the class
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
}
// no error becuase constructor available in private section but object not created 
//if object not created then constructor will not be executed.
//if constructor not executed then no error

