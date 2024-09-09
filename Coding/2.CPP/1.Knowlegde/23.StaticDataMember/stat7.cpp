#include<iostream>
using namespace std;
class Family
{
	int cash,gold;
	Family(){
		cout << "private constructor "<< endl;
		cash = 10,gold = 20;
	}
	~Family() {
		cout << "private destructor " << endl;
	}
	public:
	void get_data() { // non-static memebr function
		cout << "cash - " << cash << " gold - " << gold << endl;
	}
	static	void create_object() { // static member function
		cout << "object created" << endl;
		Family f1; // object created
		f1.get_data(); //calling member function
	}	
};

main()
{
	Family::create_object(); //calling static member function
	Family::create_object(); //calling static member function

}

//static member functions are belongs to classes and not belongs to object.
//static member functions can call dirctly with the class name
//no need to use object ,to call the static membr functions

//Q.why we need to write constructor in private section?
//Ans: if constructor is avilable  in private section then object can't be created unnesscessarly in non member functions( outside the class). so that we can create object must and should inside a class.so that we can provide more security for that object. 


//Q.what is the main purpose of  static member functions?
//Ans: if we are  writing constructor in the private section ,only possible method to create object is static member function only.


//Q.what is the need of cretaing object inside the member function(class)
//Ans: if object is  created  in side the static member function then you can take restriction in such a way that you can create only one object to the class.

//Q. why we need to create one object to the class?
//Ans: if a class having only one object then it is called as singleton class.
//singleton class will be used in real time : vlc media player, windows task manager etc..


//static member functions doesn't have "this pointer"


