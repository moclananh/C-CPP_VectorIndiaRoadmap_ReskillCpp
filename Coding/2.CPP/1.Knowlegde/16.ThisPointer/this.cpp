#include<iostream>
using namespace std;
class Family_A
{
	int cash,gold; // data members
	public:
	/******** member functions ************/
	void set_data() {
		cout << "enter data " << endl;
		cin >> cash >> gold;
	}
	void get_data() {
		cout << "cash - " << cash << endl;
		cout << "gold - " << gold << endl;
	}
};
/***********non member functions ************/
main()
{
 Family_A  obj1,obj2; // obj1 is object of class
 //cout<<obj1.cash<<" "<<obj1.gold;
 obj1.set_data(); //internally compiler will take like   Family_A::set_data(&obj1);
 obj2.set_data(); //internally compiler will take like   Family_A::set_data(&obj1);

 obj1.get_data();//internally compiler will take like  Family_A::get_data(&obj1);
 obj2.get_data();//internally compiler will take like  Family_A::get_data(&obj1);
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







