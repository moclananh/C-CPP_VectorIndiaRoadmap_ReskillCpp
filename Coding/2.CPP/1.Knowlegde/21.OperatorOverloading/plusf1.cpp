// plus operator overloaded as friend function
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
	friend A operator +(A,A) ;
};

A operator +(A obj1,A obj2) {
	cout << "opeartor + overloaded as friend function " << endl;
	A ret;
	ret.x  = obj1.x + obj2.x;
	ret.y  = obj1.y + obj2.y;
	return ret;
}
main()
{
	A obj1(1,2),obj2(10,20),obj3;
	obj3=obj1+obj2;  // obj3 = operator +(obj1,obj2);
	obj3.get_data();
}
// here + opeartor we are overloading.
//first recongize is it binary or uniary opeartor?
// second: are you implementing member function or friend function?
// then implement the logic accordingly


// here + opeartor is a binary operator and implementing as non-member function(friend function)
// if it is binary operator then internally it will call the non-member function without object
//so left side object and right side objects both will passed as arguments to the friend function

// obj1+obj2 // internally it will call  the non member function like  
// operator +(obj1,obj2);




