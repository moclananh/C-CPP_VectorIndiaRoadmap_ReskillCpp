//allocate memory dynamically for an array and initalize using new opeartor
#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
	int *p; // p is local pointer variable and memory allocated in stack section 
	p=new int[5]{10,20,30,40,50}; // array initalization

	for(int i=0;i<5;i++) // printing array elements
		cout << p[i] << " " ;
	cout <<endl;
	delete [] p; // deallocating dynamic memory of an array

}
