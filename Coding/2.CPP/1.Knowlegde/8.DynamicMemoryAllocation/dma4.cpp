
//allocate memory dynamically for a variable using new opeartor and initalize the memory
#include<iostream>
using namespace std;
main()
{
	int *p; // p is local pointer variable and memory allocated in stack section 
	p=new int(200);//dynamic memory initalized with the value 200
	cout << "old value:"<<*p<<"enter data " << endl;
	cin >> *p; //scanning data
	cout << *p << endl; //printing data
	delete p; //de-allocating dynamic memory

}
