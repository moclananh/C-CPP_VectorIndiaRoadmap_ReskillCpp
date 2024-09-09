#include<iostream>
using namespace std;
main()
{
	char ch;
	cout << "enter char " << endl;
	cin >> ch;
	cout << "char ch - " << ch << endl;
//	cout << "ASCII - " << dec << ch << endl;
	cout << "ASCII - " << (int)ch << endl; // typecast to get char to ASCII
}
//char and integer both are same family that's why if u r using dec also will not get output in ASCII format.
