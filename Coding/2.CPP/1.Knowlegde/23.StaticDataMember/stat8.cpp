#include<iostream>
using namespace std;
class Family
{
	int cash,gold; //non-static data members
	static int c; //static data member
public:
	Family(){
		cout << "private constructor "<< endl;
		cash = 10,gold = 20;
	}
	~Family() {
		cout << "private destructor " << endl;
	}
	static	void get_data() { // static memebr function
//		cout << "cash - " << cash << " gold - " << gold << endl;
		cout << c << endl;
	}
};
int Family::c=0; //defination 
main()
{
	Family f1,f2;
 	Family::get_data();
}

// static member function can access only static members(may be data member / member function)
//static member fucntions can't access non-static members(may be data member /member function )

// because static member function doesn't have this pointer ,so can't access non -static data 



