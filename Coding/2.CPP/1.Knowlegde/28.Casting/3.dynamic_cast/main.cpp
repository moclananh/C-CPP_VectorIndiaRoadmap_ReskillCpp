#include <iostream>
class Base
{
    virtual void func() {} // Hàm ảo
};

class Derived : public Base
{
    void func() override {}
};

Base *basePtr = new Derived();
Derived *derivedPtr = dynamic_cast<Derived *>(basePtr);

int main(int argc, char const *argv[])
{
    if (derivedPtr)
    {
        // Chuyển đổi thành công
        std::cout << "Downcasting thành công!" << std::endl;
    }
    else
    {
        // Chuyển đổi thất bại
        std::cout << "Downcasting thất bại!" << std::endl;
    }

    return 0;
}
