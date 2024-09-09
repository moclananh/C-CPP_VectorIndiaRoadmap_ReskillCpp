//const object
#include<iostream>
using namespace std;
class Family
{
  int cash;
  int gold; // private data members
 public:
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
	const Family f;

}
// if object is const then const object must be initalized with constructor
//user defined constructor is mandatory
