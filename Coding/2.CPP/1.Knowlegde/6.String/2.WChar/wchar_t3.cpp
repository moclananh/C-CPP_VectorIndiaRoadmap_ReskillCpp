#include<iostream>
using namespace std;
main()
{
//	wchar_t ch=0x0905;
	wchar_t ch[10]={0x0917,0x0918,0x0919};
	setlocale(LC_ALL,""); 
	wcout  << ch << endl;
}


