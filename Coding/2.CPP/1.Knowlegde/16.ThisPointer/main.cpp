#include <iostream>
class MyClass
{
private:
    int x;

public:
    void setValue(int val)
    {
        this->x = val; // Using this pointer to access member variable
    }

    void printValue()
    {
        std::cout << "Value of x: " << this->x << std::endl;
    }

    void incrementValue()
    {
        this->x++; // Using this pointer to access member variable
    }
};