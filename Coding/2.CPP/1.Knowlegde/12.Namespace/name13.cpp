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
  using namespace ICICI; //directive namespace
main()
{
  using  SBI::accno; //declarative method
   cout <<accno << endl;
   welcome_note();

}




