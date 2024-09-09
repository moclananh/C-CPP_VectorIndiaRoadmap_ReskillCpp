#include<stdio.h>
struct st
{
	int a;
	char b;
};
main()
{
	struct st s; //s is structure variable 
	printf("%d\n",sizeof(s)); //printing size

}
//here size will be 8 bytes because of structure padding .
//adding extra bytes to the structure variable is called structure padding
//in  c or c++ size will be same for this 
