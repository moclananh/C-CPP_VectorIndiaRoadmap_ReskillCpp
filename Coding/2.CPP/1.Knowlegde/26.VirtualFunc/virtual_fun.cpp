//function overriding
#include<iostream>
using namespace std;
class Base
{
	public:
virtual void get_data() {
		cout << "in base function " <<  endl;
	}
};
class Derived:public Base
{
	public:
		void get_data() { // it is also virtual function
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

 //why answer derived  class function?
 //Ans: base class pointer will get the proper address at run time.
  //       by defualt  function binding happens at compile time.
  //so compile time instruction will be taken care first.
// whenever function binding going to happen ,it will check the type of pointer.
 // pointer type is base class ,so it will bind with base class function but base class function provided as virtual function.

//because of virtual ,compile time binding was suspended and it will postpone binding process to runtime.
// now decision taken care at  runtime.
//runtime base class pointer getting the valid object address,so it will check which object address hold.
// object address type is derived class ,so derived class function will execute.



//NOte: In base class ,if the function is virtual then the overrided function in derived class automatically behaves like virtual function(Internally )
// virtual function must be available in base class only.

//if virtual keyword is used in class,then virtual pointer will be created.
//virtual pointer(Vptr) is used to hold the address of virtual table.
//virtual table is used to hold the address of virtual functions only.
//virtual table is an array of function pointer type(array of function pointers)
//for each class, seperate virtual table will be created.
//for each object ,one virtual pointer will be avaiable

//all these are same : compile time binding/early binding /static binding  
//all thse are same:    runtime binding/ late binding / dynamic binding

