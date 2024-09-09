//printing data in hexa and octal format
#include<iostream>
using namespace std;
int main()
{
  int x;
 cout << uppercase ; // to print base format in uppercase
 cout << showpos; // to show the +ve sign
  cout << showbase ; // showing the base format of numbers
  cout << "enter x " <<  endl; //printing the message
  cin >> x; //scanning the data in x
  cout << "x in decimal :" << x << endl; // printing x value
  cout << "x in hexa : " << hex << x << endl;
  cout << noshowbase << noshowpos << nouppercase; // to disable the flags
  cout << "x in octal : "<< oct << x << endl;
   int y=200;
  // cout << "y value - " << y << endl; // y get in octal format because the last flag is oct used 
  cout << dec << y << endl; // dec flag for reset to decimal
}

//endl is a manipulator it is equalent to \n
