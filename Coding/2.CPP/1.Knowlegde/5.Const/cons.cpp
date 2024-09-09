//const member function: it is a function where the data members are constant
// returntype classname::function_name(arg) const;
#include<iostream>
using namespace std;
class Family
{
  int cash,gold; // private data members
 public:
 	void set_data() { //scanning data
	cout << "enter cash and gold "<< endl;
	cin >> cash >> gold;
	}
	void get_data() {// printing the data
	cash=100;
	gold=300;
	cout << "cash - " << cash << endl;
	cout << "gold - " << gold << endl;
	}
};
main()
{
	Family f;
	f.set_data();
	f.get_data();

}

// there is a chance to modify teh data members in get_data() function.
// now we need to restrict that get_data() should not do any changes.if changes are done it needs generate error  how?



