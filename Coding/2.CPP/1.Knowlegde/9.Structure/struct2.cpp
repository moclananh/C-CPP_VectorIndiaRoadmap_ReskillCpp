#include<iostream>
using namespace std;
struct st
{
          int x; // a and y both are data members
	  int y;
};
main()
{
	struct st s; //s is a variable of structure
	s.x=10; //assigning value 10 to x
	s.y=20; //assigning value 20 to y
	cout << s.x << " " << s.y << endl; //printing data
}
//here output 10 and 20 
