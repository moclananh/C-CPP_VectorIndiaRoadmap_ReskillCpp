// static data member initialization
#include<iostream>
using namespace std;
class Facebook
{
		int mnum;
		string name;
		static int count; //static data member declaration,so memory not created
	public:
		Facebook() {
			count++;
			cout << "enter account details  " << endl;
			cin >> mnum >> name;
		}
		int total_accounts() {
		return count;
		}
		~Facebook() {
			cout << "account deleted "<< endl;
			count--;
		}


};
int Facebook :: count=0; // initialization // memory created in data section  becuase it is defination
main()
{
	Facebook f1,f2,f3;
	{
		Facebook f4,f5;
		cout << "present count: " << f4.total_accounts() << endl;
	}
	cout << "present count: " << f1.total_accounts() << endl;


}


//count is static data member so memory cretaed in the data section.
//count is global variable for Facebook class
//count variable can be accessed by all the objects of Facebook
//by default value will be zero
// count is belongs to Facebook class 
//so you can access dirctly by class name 
//no need of object 
