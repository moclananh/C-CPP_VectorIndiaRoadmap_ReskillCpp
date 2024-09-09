#include <iostream>

class Base
{
public:
    virtual void display()
    {
        std::cout << "Base display" << std::endl;
    }
};

class Derived : public Base
{
public:
    void display() override
    {
        std::cout << "Derived display" << std::endl;
    }
};

int main()
{
    Base *basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display(); // Output: Derived display
    return 0;
}
