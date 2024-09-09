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
	cout << accno << endl;
	welcome_note();
}
//Note: once the directive name space is used then you can access the data from that particular namesapce frequently.
//but if the directive namespace is used within a block then the scope of that particular directive namespace is local to that block only. it won't be available outside the block.

//error : because both SBI and ICICI informed compiler to access the data  but compiler unable to decide from where to access the data.



