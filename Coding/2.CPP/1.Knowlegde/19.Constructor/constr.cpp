//initialization of class object
#include<iostream>
using namespace std;
class Family
{
	public:
		int cash,gold;
		void get_data() {
			cout << cash << " "<< gold << endl;
		}
};
main()
{
	Family f1={10,20}; // initalization of class object f1
	f1.get_data(); //printing data

}
