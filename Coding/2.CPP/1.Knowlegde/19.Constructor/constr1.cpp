//initialization of class object ,if class data members are private section
#include<iostream>
using namespace std;
class Family
{
	int cash,gold;
	public:
	void get_data() {
		cout << cash << " "<< gold << endl;
	}
};
main()
{
	Family f1={10,20}; //error
	f1.get_data(); //printing data
}
// error becuase the data members of a class are avaiable under private section,so private data can't access in main function 
//because of this reason the object can't be initalized in main function




