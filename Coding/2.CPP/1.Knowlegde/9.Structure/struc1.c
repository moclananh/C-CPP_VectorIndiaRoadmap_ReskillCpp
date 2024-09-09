#include<stdio.h>
#pragma pack(1) //allocate memory multiple of 1 byte
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
//here size will be 5 bytes because of  no structure padding .
//in  c or c++ size will be same for this 
