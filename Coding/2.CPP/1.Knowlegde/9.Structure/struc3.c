#include<stdio.h>
struct st
{
int x;
int y;
};
main()
{
	struct st s; //s is structure variable 
	s.x=10;
	s.y=20;
printf("%d\n",sizeof(s)); //printing size
}
