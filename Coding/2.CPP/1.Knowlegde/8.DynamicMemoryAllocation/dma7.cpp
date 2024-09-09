//failed to allocate memory dynamically for an array using malloc
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int *p; // p is local pointer variable and memory allocated in stack section 
	p=(int*)malloc(sizeof(int)*100000000000000000000000); // p holding dynamic memory(heap section memory)
	if(p==0) // on failure malloc returns zero 
	 { 
            cout << "memory not allocated" << endl;
	    return 0;
	 }
	else
	  cout << "memory allocated "<< endl;
	free(p); // deleting memory

}
