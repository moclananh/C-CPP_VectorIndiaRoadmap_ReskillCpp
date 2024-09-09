//friend function can be friend to N number of classes
#include<iostream>
using namespace std;
class Father; //forward declaration
class Son
{
	char name[20];
	float sal;
	public:
	void set_data() {
		cout << "enter son details " << endl;
		cin >> name >> sal;
	}
	void get_data() {
		cout << "name- " << name << endl;
		cout << "sal- " << sal << endl;
	}
friend void income_tax(Son,Father);
};
class Father
{
char name[20];
float sal;
public:
	void set_data(){
	cout << "enter father details " << endl;
	cin >> name >> sal;
	}
	void get_data() {
	cout << "name - "<< name << endl;
	cout << "sal - " << sal << endl;
	}
friend void income_tax(Son,Father);

};
/************ non member functions **********************/
void income_tax(Son s,Father f){
  float total;
   total=s.sal + f.sal; // adding both salaries
   if(total <=50000)
     cout << "no need to pay tax "<< endl;
   else
      cout << "20%% tax needs to pay" <<endl;
}
main()
{
 Father f1;
 Son s1;
 f1.set_data();  // Father::set_data(&f1);
 s1.set_data(); // Son::set_data(&s1);
  income_tax(s1,f1);

}
