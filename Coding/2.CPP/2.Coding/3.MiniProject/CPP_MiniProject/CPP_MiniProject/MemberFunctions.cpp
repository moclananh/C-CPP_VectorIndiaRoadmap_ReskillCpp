#include"Mylib.h"

// Member function
MyString& MyString::operator=(const MyString& other) {
	if (this == &other)
	{
		return *this;
	}
	delete[]str;
	length = other.length;
	str = new char[length + 1];
	for (int i = 0; i < length; ++i)
	{
		str[i] = other.str[i];
	}
	str[length] = '\0';
	return *this;
}

MyString MyString::operator+(const MyString& other) {
	MyString newStr;
	newStr.length = length + other.length;
	newStr.str = new char[newStr.length + 1];
	for (int i = 0; i < length; ++i)
	{
		newStr.str[i] = str[i];
	}

	for (int i = 0; i < other.length; ++i)
	{
		newStr.str[length + i] = other.str[i];
	}

	newStr.str[newStr.length] = '\0';

	return newStr;
}

char& MyString::operator[](int index)
{
	if (index >= 0 && index < length)
	{
		return str[index];
	}
	throw out_of_range("Index out of bounds");
}

std::ostream& operator<<(std::ostream& os, const MyString& s)
{
	return os << s.str;
}

std::istream& operator>>(std::istream& is, MyString& s)
{
	char buffer[1000];
	is >> buffer;
	s.length = s.stringLength(buffer);
	s.str = new char[s.length + 1];
	for (int i = 0; i < s.length; ++i)
	{
		s.str[i] = buffer[i];
	}
	s.str[s.length] = '\0';
	return is;
}

bool MyString::operator==(const MyString& other) const
{
	if (length != other.length)
	{
		return false;
	}for (int i = 0; i < length; ++i)
	{
		if (str[i] != other.str[i])
		{
			return false;
		}
	}
	return true;
}

bool MyString::operator!=(const MyString& other) const
{
	return !(*this == other);
}

bool MyString::operator<(const MyString& other) const
{
	int minLength = (length < other.length) ? length : other.length;
	for (int i = 0; i < minLength; ++i)
	{
		if (str[i] < other.str[i])
		{
			return true;
		}if (str[i] > other.str[i])
		{
			return false;
		}
		return length < other.length;
	}
	return true;
}

bool MyString::operator>(const MyString& other) const
{
	return other < *this;
}

bool MyString::operator<=(const MyString& other) const
{
	return !(*this > other);
}

bool MyString::operator>=(const MyString& other) const
{
	return !(*this < other);
}


