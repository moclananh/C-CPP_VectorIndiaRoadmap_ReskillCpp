//const object
#include<iostream>
using namespace std;
class Family
{
  int cash;
  int gold; // private data members
 public:
 	Family(){ // constructor
	cash  = 10,gold = 20;
	}
	Family(int a,int b) {
	cash = a,gold = b;
	}
 	void set_data() { //non-const member function
	cout << "enter cash and gold "<< endl;
	cin >> cash >> gold;
	}
	void get_data() const {// const member function
	cout << "cash - " << cash << endl;
	cout << "gold - " << gold << endl;
	}
};
main()
{
	const Family f(100,200);
//	f.set_data();
	f.get_data();
}
// if object is const then const object must be initalized with constructor
//user defined constructor is mandatory

// by using const object ,we can't call non-const member function.



