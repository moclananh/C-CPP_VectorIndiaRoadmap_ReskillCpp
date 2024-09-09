// static data member
#include<iostream>
using namespace std;
class Facebook
{
public:
 static int count; //static data member declaration
 Facebook() {
	count++;
 }
};
main()
{
  cout << Facebook :: count  << endl; // zero 
  Facebook f1,f2,f3;
  cout << Facebook :: count  << endl; // three
 cout << f1.count << " "<< f2.count << " "<< f3.count << endl;
}
// program will genearte error becuase no defination avaiable for static data member  

//count is static data member so memory cretaed in the data section.
//count is global variable for Facebook class
//count variable can be accessed by all the objects of Facebook
//by default value will be zero
// count is belongs to Facebook class 
//so you can access dirctly by class name 
//no need of object 
