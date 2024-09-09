#include"Mylib.h"

int main() {
	MyString s1("Hello, ");
	MyString s2("World.");
	
	cout << strcat(s1, s2) << endl;

	return 0;
}