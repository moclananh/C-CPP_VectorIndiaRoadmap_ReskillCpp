#include<iostream>
using namespace std;
int sum(int,int=100 ,int=200); //total 3 arguments required in that 1st one is mandatory and remaining two elemnets are optinal
main()
{
cout <<  sum(10,20,30) << endl;// 10,20,30
cout << sum(10,20) << endl; //10 will store in a ,20 will store in b ,then c will take default value(200)
cout << sum(10) << endl; //10 will store in a,b will take default value(100) ,c will take default value (200)
//cout << sum() << endl; //error because must and should one argumnet required
}
int sum(int a,int b,int c) //function defination
{
 return a+b+c;
}
