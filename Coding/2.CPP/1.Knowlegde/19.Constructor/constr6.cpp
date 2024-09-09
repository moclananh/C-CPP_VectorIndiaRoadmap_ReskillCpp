//different objects initalization
#include<iostream>
using namespace std;
class Family
{
	int cash,gold;
	public:
	Family() {
	cout << "constructor  " << endl;
	cin >> cash >> gold ; //scanning data at runtime
	}
	void get_data() {
		cout << cash << " "<< gold << endl;
	}
};
main()
{
Family f1,f2,f3;
f1.get_data();
f2.get_data();
f3.get_data();
}

// if 100 objects are created then constructor will execute 100 times for each object.

//Q.How many times constructor will execute for an object ,in it's life time of that particlaur object.
//Ans: only one time.
//becuase initalization will happend only one time ,at the time of creating an object.


//Q.is constructor is creating/constructing an object?
//Ans: yes,constructor creating an object
//explanation : check the screenshot shared in LMS











