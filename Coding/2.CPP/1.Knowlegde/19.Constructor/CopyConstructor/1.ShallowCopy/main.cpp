#include <iostream>
#include <cstring>

class String
{
private:
    char *data;

public:
    // Constructor
    String(const char *str)
    {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    // Copy Constructor (Shallow Copy)
    String(const String &other)
    {
        data = other.data;
    }

    // Destructor
    ~String()
    {
        delete[] data;
    }

    void print() const
    {
        std::cout << data << std::endl;
    }
};

int main()
{
    String str1("Hello");
    String str2 = str1; // Shallow copy

    str1.print(); // Output: Hello
    str2.print(); // Output: Hello

    return 0;
}
