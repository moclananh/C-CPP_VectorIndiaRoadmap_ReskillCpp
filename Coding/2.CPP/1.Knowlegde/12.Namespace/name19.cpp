//nested namespace : namespace within (inside) another namespace as element
#include<iostream>
using namespace std;
namespace first
{
	int x=10;
	namespace second
	{
		int x=100;
		namespace third
		{
			int x=1000;
		}
	}
}
main()
{
cout << first::second::third::x << endl; // 1000
cout << first::second::x  << endl; //100
cout << first::x << endl; //10
}









