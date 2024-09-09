//function overriding
#include<iostream>
using namespace std;
class Base
{
	int x;
	public:
	void get_data() {
		cout << "in base x - " << x <<  endl;
	}
};
class Derived:public Base
{
	int y;
	public:
	void get_data() {
		cout << "in derived y - " << y << endl;
	}
};
main()
{

Base *ptr;
Derived d1;
ptr = &d1;
d1.get_data();
ptr->get_data();

#if 0
Base *bptr; //base class pointer
Derived d1; // derived class object
bptr=&d1; // yes,base class pointer can hold the address of derived class object,becuase inheritance is avaibale from base class to derived class.
#endif
}


