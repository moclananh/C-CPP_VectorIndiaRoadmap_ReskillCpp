//hinding data members of structure
#include<iostream>
using namespace std;
struct st
{
private://using access specifier
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
//here ,below private access specifier: all members will treated as private(means not possible to access outside of structure)

//output is error: becuase accessing in main function (outside structure)


