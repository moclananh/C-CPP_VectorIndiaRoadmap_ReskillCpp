// modify only particular data member in const member function and reamining data members can modify
//mutable : mutable is a keyword where it will remove the constness from the const member function
#include<iostream>
using namespace std;
class Family
{
  int cash;
mutable  int gold; // private data members
 public:
 	void set_data() { //non-const member function
	cout << "enter cash and gold "<< endl;
	cin >> cash >> gold;
	}
	void get_data() const {// const member function
	cash=100; // error becuase with respecet to this pointer data is const
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

// becuase of mutable keyword ,we can modify gold in get_data () function.
//cash we can't modify becuase it is not mutable




