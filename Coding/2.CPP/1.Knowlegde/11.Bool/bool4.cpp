//WAP to check given number is even or not.
//if even, print true or else print false

#include<iostream>
using namespace std;
bool iseven(int n)
{
	if(n%2==0) // checking even or not 
		return true; // if even 
	else
		return false; // if not even
}
main()
{
	int num;
	cout << "enter  number "<< endl;
	cin >> num; //scanning a number
	cout << boolalpha; // flag to print true or false
	cout << iseven(num) << endl; //calling function to check
	
}
