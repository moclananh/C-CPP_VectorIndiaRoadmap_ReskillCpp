//namespace function defination outside the block
#include<iostream>
using namespace std;
namespace SBI
{ // created namespace SBI
	int accno=1234;
	void welcome_note(); //function prototype
}
namespace ICICI
{ //created namespace ICICI
	int accno=4567;
	void welcome_note(); //function prototype
}

/********* function definations of namespaces **********/
	void ICICI::welcome_note() {
		cout << "welcome to ICICI" <<endl;
	}
	void SBI::welcome_note() {
		cout << "welcome to SBI "<< endl;
	}

main()
{
  using namespace SBI;
 cout << accno << endl;
 welcome_note();

}




