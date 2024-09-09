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

    // Copy Constructor (Deep Copy)
    String(const String &other)
    {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
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
    String str2 = str1; // Deep copy

    str1.print(); // Output: Hello
    str2.print(); // Output: Hello

    return 0;
}
