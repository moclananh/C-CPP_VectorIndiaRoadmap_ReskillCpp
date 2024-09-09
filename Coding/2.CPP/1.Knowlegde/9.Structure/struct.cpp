#include<iostream>
using namespace std;
struct st
{
	/********* data members ********/
	int x;
	int y;
	/************** member functions******/
	void test() {
		cout << "test function in str ucture" << endl; 
	}
};
main()
{
	struct st s; //s is a variable of structure
	cout << sizeof(s) << endl; //printing the size
}
//here size of structure is 8  bytes
//size of structure depends only on the data members.
//while finding the size ,should not include the member functions.






