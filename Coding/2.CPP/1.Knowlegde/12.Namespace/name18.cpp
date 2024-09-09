//redfination of namespace (split the namespace )
#include<iostream>
using namespace std;
namespace first
{
	int x=10;
	int y=100;
}
namespace first
{
	//int x=120; //error becuase already x available in first block
	int z=200;
}

main()
{
	cout << first::x << endl; // output: 10
	cout << first::z << endl; // output: 200
}


