#include"Mylib.h"
/* Friend function */

//copy str
MyString strcpy(MyString& dest, const MyString& src)
{
	delete[] dest.str;
	dest.length = src.length;
	dest.str = new char[dest.length + 1];
	for (int i = 0; i < dest.length; ++i)
	{
		dest.str[i] = src.str[i];
	}
	dest.str[dest.length] = '\0';
	return dest;
}

//copy n char
MyString strncpy(MyString& dest, const MyString& src, int n)
{
	delete[] dest.str;
	dest.length = src.length;
	dest.str = new char[dest.length + 1];
	for (int i = 0; i < n; ++i)
	{
		dest.str[i] = src.str[i];
	}
	dest.str[n] = '\0';
	return dest;
}

// compare 2 str
int strcmp(const MyString& s1, const MyString& s2)
{
	int strlen1 = s1.length, strlen2 = s2.length;
	int min_length = strlen1 < strlen2 ? strlen1 : strlen2;
	for (int i = 0; i < min_length; i++)
	{
		if (s1.str[i] != s2.str[i])
		{
			if (s1.str[i] > s2.str[i])
				return 1;
			else
				return -1;
		}
	}
	if (strlen1 < strlen2)
		return -1;
	else if (strlen1 > strlen2)
		return 1;
	else
		return 0;
}

// compare 2 str with n char
int strncmp(const MyString& s1, const MyString& s2, int n)
{
	int len1 = s1.length;
	int len2 = s2.length;
	int min_length = n < len1 ? n : len1;
	min_length = min_length < len2 ? min_length : len2;

	for (int i = 0; i < min_length; i++)
	{
		if (s1.str[i] != s2.str[i])
		{
			return (s1.str[i] > s2.str[i]) ? 1 : -1;
		}
	}

	if (min_length < n)
	{
		if (len1 < len2)
			return -1;
		else if (len1 > len2)
			return 1;
	}

	return 0;
}

// concat
MyString strcat(MyString& dest, const MyString& src)
{
	char* newStr = new char[dest.length + src.length + 1];
	for (int i = 0; i < dest.length; ++i)
	{
		newStr[i] = dest.str[i];
	}
	for (int i = 0; i < src.length; ++i)
	{
		newStr[dest.length + i] = src.str[i];
	}
	newStr[dest.length + src.length] = '\0';
	delete[] dest.str;
	dest.str = newStr;
	dest.length += src.length;
	return dest;
}

//concat n char
MyString strncat(MyString& dest, const MyString& src, int n)
{
	char* newStr = new char[dest.length + n + 1];
	for (int i = 0; i < dest.length; ++i)
	{
		newStr[i] = dest.str[i];
	}
	for (int i = 0; i < n; ++i)
	{
		newStr[dest.length + i] = src.str[i];
	}
	newStr[dest.length + n] = '\0';
	delete[] dest.str;
	dest.str = newStr;
	dest.length += n;
	return dest;
}

//reverse str
MyString strrev(MyString& s)
{
	for (int i = 0; i < s.length / 2; ++i)
	{
		char temp = s.str[i];
		s.str[i] = s.str[s.length - i - 1];
		s.str[s.length - i - 1] = temp;
	}
	return s;
}

// uppercase
MyString strupr(MyString& s)
{
	for (int i = 0; i < s.length; i++)
	{
		if (s.str[i] >= 'a' && s.str[i] <= 'z')
		{
			s.str[i] = s.str[i] - 'a' + 'A';
		}
	}
	return s;
}

//lowercase
MyString strlwr(MyString& s)
{
	for (int i = 0; i < s.length; i++)
	{
		if (s.str[i] >= 'A' && s.str[i] <= 'Z')
		{
			s.str[i] = s.str[i] - 'A' + 'a';
		}
	}
	return s;
}

//print str from the first char founded to end
const char* strchr(const MyString& s, char ch)
{
	for (int i = 0; i < s.length; i++)
	{
		if (s.str[i] == ch)
		{
			return &s.str[i];
		}
	}
	return nullptr;
}

//same but from the last char founded to end
const char* strrchr(const MyString& s, char ch)
{
	for (int i = s.length - 1; i >= 0; i--)
	{
		if (s.str[i] == ch)
		{
			return &s.str[i];
		}
	}
	return nullptr;
}

//same to strchr but accept as string
const char* strstr(const MyString& s1, const MyString& s2)
{
	for (int i = 0; i < s1.length - s2.length; i++)
	{
		int j = 0;
		while (j < s2.length && s1.str[i+j] ==s2.str[j])
		{
			++j;
		}
		if (j == s2.length) {
			return &s1.str[i];
		}
	}
	return nullptr;
}

//length of str
int strlen(const MyString& s)
{
	return s.length;
}
