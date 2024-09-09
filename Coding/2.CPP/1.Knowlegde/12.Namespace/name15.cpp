//analasis of namespace 
#include<iostream>
using namespace std;
main()
{
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
	using namespace ICICI; //directive namespace
	cout <<accno << endl;
	welcome_note();
}
// error becuase the namespace definations should not write inside the main function.
//namespace only for global identifiers not for local identifiers

