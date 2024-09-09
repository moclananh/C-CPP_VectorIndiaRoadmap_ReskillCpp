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
	using namespace ICICI; //directive method used 
	cout << SBI::accno << endl; // normal method
	SBI::welcome_note();        
}
//here directive and normal method both used so it will give priroty to normal method only





