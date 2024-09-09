//printing data in hexa and octal format
#include<iostream>
using namespace std;
int main()
{
  int x;
  cout << "enter x " <<  endl; //printing the message
  cin >> x; //scanning the data in x
  cout << "x in decimal - " << x << endl; // printing x value
  cout << "x in hexa - " << hex << x << endl;
  cout << "x in octal -"<< oct << x << endl;
}

//endl is a manipulator it is equalent to \n
