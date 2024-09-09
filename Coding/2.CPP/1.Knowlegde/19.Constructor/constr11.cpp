//providing default argumenst to constructor
#include<iostream>
using namespace std;
class Family
{
	int cash,gold;
	public:
	Family();
	Family(int=400,int=300);
	void get_data();
};
/******* class member function defination outside the class ***/
Family:: Family() {
cout << "default" << endl;
}
Family::Family(int a,int b) {
	cout << "parametrized " << endl;
	cash = a,gold = b;
}
void Family::get_data() {
	cout << cash << " "<< gold << endl;
}

main()
{
	Family f1,f2(10),f3(10,20);
	f1.get_data();
	f2.get_data();
	f3.get_data();
}
// error because Family f1 object tries to call default constructor.
//but default constructor defination not provided by user explicilty

// whenever user provides any constructor explicitly then compiler will not provide default constructor to class.






//if parametrized all the arguments are default parameters then it will work like default constructor  as well as parametrized constructor.
//compiler unable to decide which constructor needs to execute.
//finally it will generate error.
//to avoid these type of problems in future,compiler is restricted itself that ,not provide default constructor if user provided any constructor explicitly.




