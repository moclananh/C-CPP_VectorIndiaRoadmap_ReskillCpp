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
 Derived *dptr;
 Base b1;
 dptr = &b1;
 dptr->get_data();

#if 0
Derived *dptr; //derived class pointer
Base b1; //base class object
dptr=&b1;// NO,derived class pointer can't be hold base class object address ,because there is no inheritance avaiable from derived class to base class.
#endif
}


