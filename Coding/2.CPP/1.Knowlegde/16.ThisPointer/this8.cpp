// member function definations of a class define outside,after the main function 
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

/***********non member functions ************/
main()
{
Family_A obj1,obj2; //obj1 and obj2 both are objects
 Family_A::set_data(&obj1,10,20); //error
 Family_A::get_data(&obj1); //error
 Family_A::set_data(&obj2,30,40); //error
 Family_A::get_data(&obj2); //error
}
/******** member function defination outside the class ************/
void Family_A::set_data(int a,int b) {
cash = a, gold = b; // assigning the data
}
void Family_A::get_data() {
cout << "cash - " << this->cash << endl;
cout << "gold - " << this->gold << endl;
}
/// every member function must be called through object 
//you should not call like ,shown in the program








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







