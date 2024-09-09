#include<iostream>
using namespace std;
struct st
{
	/************** member functions******/
	void test() {
		cout << "test function in structure" << endl; 
	}
};
main()
{
	struct st s; //s is a variable of structure
	cout << sizeof(s) << endl; //printing the size
	s.test();
}
//here size of structure is 1  byte
//Q.why empty structure in c++ having  one byte of memory?
//Ans:  to show the variable existance,c++ compiler crearting min 1 byte of memory

//explanantion:
//size of structure depends only on the data members ,here no data members so can i say 0 bytes will be created.if 0 bytes created can i say memory not created.if memory not created can i say varibale 's' not created.if variable 's' not created can i acess test() function?
//NO, because test() is a member function and it must be accessed through structure variable.so first variable s should create.because of this reason compiler of c++ creating minimum 1 byte of memory for empty structure 
//while finding the size ,should not include the member functions.






