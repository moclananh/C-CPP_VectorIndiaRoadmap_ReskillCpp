// function return type as object,address and reference
#include<iostream>
using namespace std;
class Complex
{
	int real;
	int img;
	public:
	void set_data(){
		cout << "enter real and img " << endl;
		cin >> real >> img;
	}
	void get_data() {
		cout  << "complex number : ";
		if(img<0)
			cout << real << img << "j" <<endl;
		else
			cout << real << "+"<< img <<"j" <<endl;
	}
	Complex addition(Complex &obj2) {
	cout << "return type as object " << endl;
	 Complex ret;
	ret.real = real + obj2.real;
	ret.img  = img  + obj2.img;
	return ret;
	}
	Complex& addition2(Complex &obj2) {
	cout << "return type as reference "<< endl;
	static Complex ret;
	ret.real = real + obj2.real;
	ret.img  = img  + obj2.img;
	return ret;
	}
	Complex * addition3(Complex &obj2) {
	cout << "return type as address "<< endl;
	 static Complex ret;
	 ret.real = real + obj2.real;
	 ret.img  = img  + obj2.img ;
	 return &ret;
	}
};
main()
{
Complex c1,c2,c3,c4,*c5;
c1.set_data();
c2.set_data();
c1.get_data();
c2.get_data();
c3=c1.addition(c2);   //c3= Complex::addition(&c1,c2);
c3.get_data();
c4=c1.addition2(c2); // c4= Complex::addition2(&c1,c2);
c4.get_data();
c5=c1.addition3(c2); // c5= Complex::addition3(&c1,c2);
c5->get_data();
}





