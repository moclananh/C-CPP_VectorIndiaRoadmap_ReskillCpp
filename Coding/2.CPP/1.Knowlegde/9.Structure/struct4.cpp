//assigning and printing hided data members of str:wucture
#include<iostream>
using namespace std;
struct st
{
private://using access specifier
          int x; // a and y both are data members
	  int y;
public: // using access specifier
/********* member functions**********/
	void set_data() {
		cout << "enter x and y " << endl;
		cin >> x >> y;
	}	
	void print_data() {
	cout << x << " "<< y << endl;
	}
};
	struct st s; //s is global variable of structure
main()
{
	s.set_data(); //calling member function to assign valid data
	s.print_data(); //calling member function to print the data
}
//here ,below private access specifier: all members will treated as private(means not possible to access outside of structure)

// here member functions are avaiable under public section ,so they can access outside the structure also 

//member functions can access private data of same structure.

