//name mangaling concept
#include<iostream>
using namespace std;
int sum(int a,int b) {}
int sum(int a,float b){}
float sum (float *a,float *b){}
int sum(char &a,char &b) {}
int sum(int *a,int *b) {}
main()
{

}
//check translator stage output.
// c++ -S func3.cpp -o func3.s
//will get the modified function names

