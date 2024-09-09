
//allocate memory dynamically for a variable using new opeartor
#include<iostream>
using namespace std;
main()
{
	int *p; // p is local pointer variable and memory allocated in stack section 
	p=new int;// p holding dynamic memory(heap section memory)
	*p=400; // assigning data 
	cout << *p << endl; //printing data


}
