#include<iostream>
using namespace std;
class Base
{ 
   int x;
   int y;
public:
   Base()
   {
     cout<<this<< " "<< *(void**)this<<endl;
     cout<<&(this->x)<< " "<< &(this->y)<<endl;
   }
   void display()
   {
     cout<<"Base display"<<endl;
   }
};
class Derived: public Base
{ 
   int l,m;
public:
   void display()
   {
     cout<<"derived display"<<endl;
   }
};
int main()
{
  Base b;
  cout<<&b;

}


