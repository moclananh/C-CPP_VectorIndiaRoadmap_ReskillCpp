#include<iostream>
using namespace std;
int sum(int=100 ,int=200 ,int); // error: default argumnets munst be right most parameters
main()
{
cout <<  sum(10,20,30) << endl;// 10,20,30
cout << sum(,10,20) << endl;    // syntax error ,should not call like this
cout << sum(10,20) << endl; //10 will store in a ,20 will store in b ,then what about c? // error
}
int sum(int a,int b,int c) //function defination
{
 return a+b+c;
}
