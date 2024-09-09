//alias name for namespace :
//syntax:  namespace new_name=exist_name
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
namespace final_name=first::second::third;
cout << final_name::x << endl; // 1000
}









