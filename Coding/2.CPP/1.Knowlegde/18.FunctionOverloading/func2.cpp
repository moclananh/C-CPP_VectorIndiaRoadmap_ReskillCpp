#include<iostream>
using namespace std;
int sum(int a,int b)
{
	cout << "sum function with 2 int arg " << endl;
	return a+b;
}
float sum(int a,int  b){
	cout << "return float func" << endl;
	return a+b;
}
main()
{
	cout << sum(10.2f,23.4f) << endl;
}
//error: because  function names are same  and argumnets also same
//function overloading means argumnets must be different
