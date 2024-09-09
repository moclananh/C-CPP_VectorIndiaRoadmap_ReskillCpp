#include"Mylib.h"

int MyString::stringLength(const char* s) const
{
	int len = 0;
	while (s[len] != '\0')
	{
		++len;
	}
	return len;
}

//Defaut constructor
MyString::MyString() : str(nullptr), length(0) {}

// Parameterized constructor
MyString::MyString(const char* s)
{
	length = stringLength(s);
	str = new char[length + 1];
	for (int i = 0; i < length; ++i)
	{
		str[i] = s[i];
	}
	str[length] = '\0';
}

// Copy constructor
MyString::MyString(const MyString& other)
{
	length = other.length;
	str = new char[length + 1];
	for (int i = 0; i < length; ++i)
	{
		str[i] = other.str[i];
	}
	str[length] = '\0';
}

// Destructor
MyString::~MyString()
{

	delete[] str;
}