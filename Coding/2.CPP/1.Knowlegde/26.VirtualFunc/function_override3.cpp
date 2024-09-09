//function overriding
#include<iostream>
using namespace std;
class Base
{
	public:
	void get_data() {
		cout << "in base function " <<  endl;
	}
};
class Derived:public Base
{
	public:
	void get_data() {
		cout << "in derived function" <<  endl;
	}
};
main()
{
Base *bptr; //base class pointer
Derived d1; // derived class object
bptr=&d1; // yes,base class pointer can hold the address of derived class object,becuase inheritance is avaibale from base class to derived class.
bptr->get_data(); //  base class function will execute
}

// function binding: resolving a function call with it's proper function defination

// by default ,function binding will happend at compile time.


 //why answer base class function?
 //Ans: base class pointer will get the proper address at run time.
  //       by defualt  function binding happens at compile time.
  //so compile time instruction will be taken care first.
// whenever function binding going to happen ,it will check the type of pointer.
 // pointer type is base class ,so it will bind with base class function.
// becuase of compile time binding it will execute base class function only at runtime.

//if you need derived class function then go for runtime binding ,instead of compile time.








