//friend functions
#include<iostream>
using namespace std;
class Family_A
{
	int cash,gold; // data members
	 friend int main(); //main is friend function 
};
int main()
{
	Family_A obj1;
	cout << obj1.cash << " "<< obj1.gold << endl;
}


//Class Family_A granted the permission to main function as friend
//once friend permissions are granted then that particular friend function can access the private members of the class.


