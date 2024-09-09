#pragma once
#include<iostream>
using namespace std;

class MyString {

	char* str;
	int length;

public:
	int stringLength(const char* s) const;
	/* Constructors */ 

	MyString();

	MyString(const char* s);

	MyString(const MyString& other);

	~MyString();

	// Member functions for string operations

	MyString& operator=(const MyString& other);

	MyString operator+(const MyString& other);

	char& operator[](int index);

	friend std::ostream& operator<<(std::ostream& os, const MyString& s);

	friend std::istream& operator>>(std::istream& is, MyString& s);

	bool operator==(const MyString& other) const;

	bool operator!=(const MyString& other) const;

	bool operator<(const MyString& other) const;

	bool operator>(const MyString& other) const;

	bool operator<=(const MyString& other) const;

	bool operator>=(const MyString& other) const;

	// Friend functions for string operations
	friend MyString strcpy(MyString& dest, const MyString& src);

	friend MyString strncpy(MyString& dest, const MyString& src, int n);

	friend int strcmp(const MyString& s1, const MyString& s2);

	friend int strncmp(const MyString& s1, const MyString& s2, int n);

	friend MyString strcat(MyString& dest, const MyString& src);

	friend MyString strncat(MyString& dest, const MyString& src, int n);

	friend MyString strrev(MyString& s);

	friend MyString strupr(MyString& s);

	friend MyString strlwr(MyString& s);

	friend const char* strchr(const MyString& s, char ch);

	friend const char* strrchr(const MyString& s, char ch);

	friend const char* strstr(const MyString& s1, const MyString& s2);

	friend int strlen(const MyString& s);

};