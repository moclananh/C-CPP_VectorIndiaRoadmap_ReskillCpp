/*copy can be done in two ways
1.shallow copy
2.Deep copy
shallow copy: copying one object infromation to another object with the help of compiler provided  copy constructor/assignment opeartor function then it is called as shallow copy

In shallow copy both objects are pointing to same memory

whenever object contains dynamically allocated pointer as a data member then shallow copy will modify the data in both objects automatically.
if one object modified tehn automatically copied object also reflected.

Deep copy:copying one object infromation to another object with the help of user provided  copy constructor/assignment opeartor function then it is called as deep copy

In deep copy both objects are pointing to different  memory

whenever object contains dynamically allocated pointer as a data member then deep copy will not modify the data in both objects automatically.
if one object modified then another object will not be reflected.

*/
//shallow copy program
#include<iostream>
#include<cstring>
using namespace std;
class Shallow
{
char *ptr;
public:
	Shallow(const char *s) {
	ptr=new char[strlen(s)+1];
	strcpy(ptr,s);
	}
	void get_string() {
	cout << "string - " << ptr << endl;
	}
	void modify() {
	
	ptr[0]='s';
	}
};
main()
{
Shallow obj1("vector"),obj2(obj1);
obj1.get_string();
obj2.get_string();
obj1.modify(); // Shallow::modify(&obj1);
cout << "**************************" <<endl;
obj1.get_string();
obj2.get_string();
}


//for object obj1, it will call parametrzed constructor
//for object obj2 ,it will call copy constructor
//if user not provided copy constructor explicitly then compiler will provide internally copy constructor defination















