//copy constructor and assignmnet operator
#include<iostream>
using namespace std;
class Family
{
	 int cash,gold; 
	public:
	Family();
	Family(int,int);
	Family(Family&);
	void get_data();
};
/******* class member function defination outside the class ***/
Family:: Family():cash(10),gold(20) { // member variable initalizatiom
	cout << "default" << endl;
}
Family::Family(int a,int b):cash(a),gold(b) { // member variable initalization
	cout << "parametrized " << endl;
}
Family::Family(Family &obj) {
cout << "copy constructor " << endl;
cash = obj.cash;
gold = obj.gold;
}
void Family::get_data() {
	cout << cash << " "<< gold << endl;
}
/********** non member function *********/

Family  test(Family f)
{
cout << "test function " <<endl;
return f;
}
main()
{
	Family f1(100,200),f2;
	f1.get_data();
	f2=test(f1);
}
//test(f1) // passing f1 as call by object so in test function to copy actual argumnets to formal argumnets intenally it wil take help of copy constructor.

//if function return type is object   then it will take copy constructor help to return the object  information .

//if arguments are reference then copy constructor  will not be executed.





