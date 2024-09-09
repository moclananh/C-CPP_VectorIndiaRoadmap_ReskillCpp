//failed to allocate memory dynamically for an array using new opeartor
#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
	int *p; // p is local pointer variable and memory allocated in stack section 
	p=new int[100000000000000000];//on failure new opeartor throws an exception(bad_alloc)

	delete [] p; // deallocating dynamic memory of an array
}
