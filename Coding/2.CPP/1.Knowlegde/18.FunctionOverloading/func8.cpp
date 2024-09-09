#include<iostream>
using namespace std;

#if 0
int sum(int a,int b=200,int c=50)
{       /* return addition value */
	return a+b+c;
} 
#endif

int sum(int a,int b=200,int c=50);
main()
{
	cout <<  sum(10,20,30) << endl; // 10,20,30
	cout << sum(10,20) << endl; //10,20,50
}

int sum(int a,int b,int c)
{       /* return addition value */
	return a+b+c;
}
//no error because the function defination itself work like a function prototype
//before function call ,we specified the default arguments



