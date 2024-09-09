//analasis of namespace 
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
using namespace SBI; //directive method used
using namespace ICICI; //directive method used 
main()
{
	cout << accno << endl;
	welcome_note();
}
//error : because both SBI and ICICI informed compiler to access the data  but compiler unable to decide from where to access the data.



