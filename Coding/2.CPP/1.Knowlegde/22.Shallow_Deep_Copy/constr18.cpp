//Deep copy program
#include<iostream>
#include<cstring>
using namespace std;
class Deep
{
char *ptr;
public:
	Deep(const char *s) {
	ptr=new char[strlen(s)+1];
	strcpy(ptr,s);
	}
	Deep(Deep &obj) {
	ptr=new char[strlen(obj.ptr)+1];
	strcpy(ptr,obj.ptr);
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
Deep obj1("vector"),obj2(obj1);
obj1.get_string();
obj2.get_string();
obj1.modify(); // Deep::modify(&obj1);
cout << "**************************" <<endl;
obj1.get_string();
obj2.get_string();
}


//for object obj1, it will call parametrzed constructor
//for object obj2 ,it will call copy constructor
//if user not provided copy constructor explicitly then compiler will provide internally copy constructor defination















