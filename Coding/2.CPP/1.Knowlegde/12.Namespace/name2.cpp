#include<iostream>
using namespace std;
namespace SBI
{ // created namespace SBI
	int accno=1234;
	void welcome_note() {
		cout << "welcome to SBI "<< endl;
	}
}
namespace ICICI
{ //created namespace ICICI
	int accno=4567;
	void welcome_note() {
		cout << "welcome to ICICI" <<endl;
	}
}
main()
{
	cout << SBI::accno << endl;
	SBI::welcome_note();
	cout << ICICI::accno << endl;
	ICICI::welcome_note();
}




