// static data member
#include<iostream>
using namespace std;
class Facebook
{
	public:
		static char count; //static data member declaration,so memory not created
		Facebook() {
			count++;
		}
};
char Facebook :: count; // memory created in data section  becuase it is defination
main()
{
	cout << sizeof(Facebook) << endl;
	cout << Facebook :: count << endl;
}

// the size of class depends on non-static data members of a class

//count is static data member so memory cretaed in the data section.
//count is global variable for Facebook class
//count variable can be accessed by all the objects of Facebook
//by default value will be zero
// count is belongs to Facebook class 
//so you can access dirctly by class name 
//no need of object 
