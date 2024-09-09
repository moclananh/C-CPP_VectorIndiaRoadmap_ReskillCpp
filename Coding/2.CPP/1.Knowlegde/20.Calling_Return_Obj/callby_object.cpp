//passing argumnets to a function as call by object,reference and address

#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
	void set_data() {
		cout << "enter real and imanginary " <<endl;
		cin >> real >> img;
	}
	void get_data() {
		cout << "complex number: " ;
		if(img<0)
			cout << real <<img <<"j" << endl;
		else
			cout << real << "+"<<img <<"j" <<endl;
	}
	void addition(Complex obj1,Complex obj2){
	cout << "call by object " <<endl;
	real = obj1.real + obj2.real;
        img  = obj1.img  + obj2.img;
	}
	void addition(Complex *ptr1,Complex *ptr2) {
	cout << "call by object as address" << endl;
	real = ptr1->real + ptr2->real;
	img  = ptr1->img  + ptr2->img;
	}
	void addition1(Complex &obj1,Complex &obj2) {
	cout << "call by object as reference "<< endl;
	real = obj1.real + obj2.real;
	img  = obj1.img  + obj2.img;
	}
};
main()
{
	Complex c1,c2,c3,c4,c5;
	c1.set_data();
	c2.set_data();
	c1.get_data();
	c2.get_data();
	c3.addition(c1,c2); // Complex::addition(&c3,c1,c2);
	c3.get_data();
	
	c4.addition(&c1,&c2); //Complex::addition(&c4,&c1,&c2);
	c4.get_data();
	
	c5.addition1(c1,c2);//Complex::addition1(&c5,c1,c2);
	c5.get_data();
}





