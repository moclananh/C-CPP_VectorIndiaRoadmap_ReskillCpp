#include<iostream>
using namespace std;
class Family
{
	int cash,gold;
	Family(){
		cout << "private constructor "<< endl;
		cash = 10,gold = 20;
	}
	~Family() {
		cout << "private destructor " << endl;
	}
	void get_data() {
		cout << "cash - " << cash << " gold - " << gold << endl;
	}
	void create_object() {
		cout << "object created" << endl;
		Family f1; // object created
		f1.get_data(); //calling member function
	}	
};
main()
{
	// Family f1;  //error becuase constructor in private


}
// constructor and destructors are avaiable in private section so,objects can't be created for Family class ouside (inside non member functions)


// Family f1 object will be created whenever the member function create_object() was called.
//create_object() is a member function and it must be called through object.
//here object can't be created outside so not possible to execute(call) create_object()
// then how can you create object?
//solution is we need to go for static member functions



