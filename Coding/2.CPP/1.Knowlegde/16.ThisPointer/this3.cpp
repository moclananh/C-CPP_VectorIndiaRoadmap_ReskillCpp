// printing address of objects and this pointer
#include<iostream>
using namespace std;
class Family_A
{
	int cash,gold; // data members
	public:
	/******** member functions ************/
	void set_data() {
		//Family_A temp; // no error ,you can declare the object inside the member function
		//this=&temp; // error becuase this pointer can't be modified
		cout << "set -  "<< (unsigned long)this << endl;
		cout << "enter data " << endl;
		cin >> this->cash >> this->gold;
	}
	void get_data() {
		cout << "get -  "<< (unsigned long)this << endl;
		cout << "cash - " << this->cash << endl;
		cout << "gold - " << this->gold << endl;
	}
};
/***********non member functions ************/
main()
{
 Family_A obj1,obj2; //obj1 and obj2 both are objects
 cout << "&obj1 - " << (unsigned long) &obj1 << endl;
 cout << "&obj2- " << (unsigned long )&obj2 << endl;
  obj1.set_data(); // internal code : Family_A::set_data(&obj1);
   obj1.get_data(); //internal code: Family_A::get_data(&obj1);
   obj2.set_data();//internal code: Family_A::set_data(&obj2);
   obj2.get_data();//internal code: Family_A::get_data(&obj2);
}
/********************* internal code ***************
  class Family_A
  {
  int cash,gold;
  public:
  void set_data(A *const this)
  {
  cin >> this->cash >> this ->gold ;
  }
  void get_data(A*const this) {
  cout << this->cash << this->gold <<endl;
  }
  };
 */







