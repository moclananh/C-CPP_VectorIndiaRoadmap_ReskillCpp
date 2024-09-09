//copy constructor and assignmnet operator
#include<iostream>
using namespace std;
class Family
{
	 int cash,gold; 
	public:
	Family();
	Family(int,int);
	void get_data();
};
/******* class member function defination outside the class ***/
Family:: Family():cash(10),gold(20) { // member variable initalizatiom
	cout << "default" << endl;
}
Family::Family(int a,int b):cash(a),gold(b) { // member variable initalization
	cout << "parametrized " << endl;
}
void Family::get_data() {
	cout << cash << " "<< gold << endl;
}

main()
{
	Family f1,f2(100,200),f3=f2,f4(f2),f5;
	f5=f2; //assignmnet opeartor function
	f1.get_data();
	f2.get_data();
}
//f1 will call default constructor
//f2 will call parametzied constrcutor
//f3 will call copy constructor
//f4 will call copy constructor
//f5 will call default constructor
//f5=f2; will call assignment overloaded opeartor function


// if no definations of copy constructor and assignmnet overloded opeartor then how it is working?
//Ans: compiler will provide the definations internally.



