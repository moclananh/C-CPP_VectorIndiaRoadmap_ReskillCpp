// member function definations of a class define outside 
#include<iostream>
using namespace std;
class Family_A
{
	int cash,gold; // data members
	public:
	/******** member functions *******/
	void set_data(int ,int );
	void get_data();
};
/******** member function defination outside the class ************/
void Family_A::set_data(int a,int b) {
	cash = a, gold = b; // assigning the data
}
void Family_A::get_data() {
	cout << "cash - " << this->cash << endl;
	cout << "gold - " << this->gold << endl;
}
/***********non member functions ************/
main()
{
	Family_A obj1,obj2; //obj1 and obj2 both are objects
	obj1.set_data(10,20); //internal code : Family_A::set_data(&obj1,10,20);
	obj1.get_data(); //internal code: Family_A::get_data(&obj1);
	obj2.set_data(30,40);//internal code: Family_A::set_data(&obj2,30,40);
	obj2.get_data();//internal code: Family_A::get_data(&obj2);
}
/********************* internal code ***************
  class Family_A
  {
  int cash,gold;
  public:
  void set_data(A *const this,int a,int b)
  {
  cin >> this->cash >> this ->gold ;
  }
  void get_data(A*const this) {
  cout << this->cash << this->gold <<endl;
  }
  };
 */







