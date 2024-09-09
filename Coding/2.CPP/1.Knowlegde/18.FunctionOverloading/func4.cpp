#include<iostream>
using namespace std;
int sum(int=100 ,int=200 ,int=300); // function prototype
main()
{
cout <<  sum(10,20,30) << endl;// 10,20,30
cout << sum(10,20) << endl;    // 10,20,300
cout << sum(10) << endl;      // 10,200,300
cout << sum() << endl;       // 100,200,300

}
int sum(int a,int b,int c) //function defination
{
 return a+b+c;
}
