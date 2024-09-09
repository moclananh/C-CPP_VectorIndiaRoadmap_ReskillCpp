#include<iostream>
using namespace std;
main()
{
  bool x; // x is variable of type bool
  cout << "enter x "<< endl;
  cin >> x;
  cout <<"x - " << x << endl;
  cout << boolalpha; //flag to print true or false
  cout << x << endl;

//apart from  0 and 1 should not store other values in bool data type
//non -zero will be created as true and zero trated as false

}

