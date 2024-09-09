#include <iostream>
#include <cstring>
#include <string>

int main()
{
    char source[20] = "hello world";
    char destination[20];

    std::cout << "Copying using strcpy():" << std::endl;
    std::cout << "Source string: " << source << std::endl;
    strcpy(destination, source);
    std::cout << "Destination string: " << destination << std::endl;

    // using string datatype
    std::string s = "hello world";
    std::string d;

    std::cout << "\nCopying using std::string:" << std::endl;
    std::cout << "Source string: " << s << std::endl;
    d = s;
    std::cout << "Destination string: " << d << std::endl;

    return 0;
}