//const member function: it is a function where the data members are constant
// returntype classname::function_name(arg) const;
#include<iostream>
using namespace std;
class Family
{
  int cash,gold; // private data members
 public:
 	void set_data() { //non-const member function
	cout << "enter cash and gold "<< endl;
	cin >> cash >> gold;
	}
	void get_data() const {// const member function
	 cash=100; // error becuase with respecet to this pointer data is const
	//gold=300;
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

//get_data() member function is const so it can't be modify the data members of a class.
//because in a const member function this pointer is pointer to const.
// in get_data() function this pointer will be created like 
// const Family *const this;// this pointer is const and pointer pointing datag also const.




