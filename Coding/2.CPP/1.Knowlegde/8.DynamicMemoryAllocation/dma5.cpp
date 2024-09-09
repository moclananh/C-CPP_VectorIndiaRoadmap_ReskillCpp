//allocate memory dynamically for an array using malloc
#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
	int *p; // p is local pointer variable and memory allocated in stack section 
	p=(int*)malloc(sizeof(int)*5); // p holding dynamic memory(heap section memory)
	for(int i=0;i<5;i++) //scanning array elements
		cin >> p[i];

	for(int i=0;i<5;i++) // printing array elements
		cout << p[i] << " " ;
	cout <<endl;
	free(p); // deleting memory

}
