#include<iostream>
using namespace std;
int sum(int a,int b)
{
	cout << "sum function with 2 int arg " << endl;
	return a+b;
}
float sum(float a,float b){
	cout << "float arg func" << endl;
	return a+b;
}
main()
{
	cout << sum(10,20) << endl;//calling int func
	cout << sum(10.2f,23.4f) << endl; //calling float func
	cout << sum('a','b') << endl;
    cout << sum(10.2,23.4) << endl; //error
}

//sum(10.2,23.4) error because exact match of function defination not available
