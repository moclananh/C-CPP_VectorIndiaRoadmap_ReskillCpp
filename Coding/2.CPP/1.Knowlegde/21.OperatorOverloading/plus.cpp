// plus opeartor overloaded as member function
#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A():x(0),y(0){} //default constructor 
	A(int a,int b):x(a),y(b){} //parametrized constructor
	void get_data() {
		cout << "x - " << x << " y -  "<< y << endl;
	}
	A operator +(A obj) {
		cout << " + opeartor overloaded " << endl;
		A ret;
		ret.x = x + obj.x ;
		ret.y = y + obj.y ;
		return ret;
	}

};
main()
{
	A obj1(10,20),obj2(100,200),obj3;
	obj1.get_data();
	obj2.get_data();
	obj3=obj1+obj2; // obj3= obj1.operator + (obj2);  // obj3=A::operator(&obj1,obj2);
	obj3.get_data();
}
// here + opeartor we are overloading.
//first recongize is it binary or uniary opeartor?
// second: are you implementing member function or friend function?
// then implement the logic accordingly


// here + opeartor is a binary operator and implementing member function for this.
// if it is binary operator then internally it will call the member function through left side object and right side object passed as argument to a member function
// obj1 + obj2 ; // obj1.operator +(obj2);









