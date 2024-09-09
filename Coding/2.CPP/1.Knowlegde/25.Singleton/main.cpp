#include <iostream>

class Singleton
{
private:
    Singleton()
    {
        std::cout << "Singleton instance created\n";
    }

public:
    static Singleton &getInstance()
    {
        static Singleton instance; // Static local variable
        return instance;
    }

    void doSomething()
    {
        std::cout << "Doing something\n";
    }
};

int main()
{
    Singleton &singleton1 = Singleton::getInstance();
    singleton1.doSomething();

    return 0;
}
