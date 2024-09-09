//string comparision
#include<iostream>
using namespace std;
main()
{
	string s1("Banaglore"),s2("vector");
        bool ret;
	cout << boolalpha;

	ret=  s1==s2;
	cout << ret << endl;

	ret=  s1!=s2;
	cout << ret << endl;
	
	ret=  s1>s2;
	cout << ret << endl;

	ret=  s1>=s2;
	cout << ret << endl;

	ret=  s1<s2;
	cout << ret << endl;

	ret=  s1<=s2;
	cout << ret << endl;
}


