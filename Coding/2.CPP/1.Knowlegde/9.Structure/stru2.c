#include<stdio.h>
struct st
{
};
main()
{
	struct st s; //s is structure variable 
	printf("%d\n",sizeof(s)); //printing size
}
//here size of empty structure in c is  0 bytes 
//here size of empty structure in c++ is 1 byte
