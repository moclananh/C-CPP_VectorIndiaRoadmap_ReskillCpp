// static data member initialization
#include<iostream>
using namespace std;
class Facebook
{
	public:
		static int count; //static data member declaration,so memory not created
		Facebook() {
			count++;
		}
};
int Facebook :: count=100; // initialization // memory created in data section  becuase it is defination
main()
{
	cout << Facebook :: count << endl;
}


//count is static data member so memory cretaed in the data section.
//count is global variable for Facebook class
//count variable can be accessed by all the objects of Facebook
//by default value will be zero
// count is belongs to Facebook class 
//so you can access dirctly by class name 
//no need of object 
