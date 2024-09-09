#include <iostream>
class Base
{
public:
    virtual void show()
    {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        std::cout << "Derived class" << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Base *obj = new Derived();
    obj->show(); // Output: Derived class
    return 0;
}
