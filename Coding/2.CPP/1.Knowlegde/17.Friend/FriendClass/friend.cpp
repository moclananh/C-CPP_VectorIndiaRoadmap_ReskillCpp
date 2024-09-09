// one class can have N number of friend functions
#include<iostream>
using namespace std;
class Family_A
{
	int cash,gold; // data members
public:
	void set_data() {
	cout  << "enter data " << endl;
	cin >> cash >> gold;
	}
	/********* friend functions*********/
	friend void test1(Family_A &);
	friend void test2(Family_A *);
	friend void test3(Family_A );
};
/************** non member functions **********/
void test1(Family_A &obj1) {
cout << "test1 - "<< obj1.cash << " "<< obj1.gold  << endl;
}
void test2(Family_A *ptr) {
cout << "test2 - " << ptr->cash << " "<< ptr->gold << endl;
}
void test3(Family_A obj){
cout << "test3 - " << obj.cash << " "<< obj.gold << endl;
}
int main()
{
	Family_A obj1;
	obj1.set_data();
	test1(obj1);
	test2(&obj1);
	test3(obj1);

}
