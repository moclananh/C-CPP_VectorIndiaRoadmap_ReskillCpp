#include<iostream>
using namespace std;
int sum(int,int,int); 
main()
{
	cout <<  sum(10,20,30) << endl; // 10,20,30
	cout << sum(10,20) << endl; // 
}
int sum(int a,int b=200,int c=50) //function defination
{
	return a+b+c;
}
//error: because line number 7 sum function call ,not following the rules of sum function prototype
