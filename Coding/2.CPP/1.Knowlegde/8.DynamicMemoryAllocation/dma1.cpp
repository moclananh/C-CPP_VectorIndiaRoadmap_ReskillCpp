//allocate memory dynamically for a variable using malloc
#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
	int *p; // p is local pointer variable and memory allocated in stack section 
	p=(int*)malloc(sizeof(int)); // p holding dynamic memory(heap section memory)
	*p=400; // assigning data 
	cout << *p << endl; //printing data


}
