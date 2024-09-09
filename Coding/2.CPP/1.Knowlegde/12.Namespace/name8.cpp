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
main()
{
	using namespace SBI; //directive method used
	cout << accno << endl;
	welcome_note();
	using namespace ICICI; //directive method used 
        
}

// above line no 21 and 22 only one namespace is used so 
//output : no error and it will access the data from SBI
