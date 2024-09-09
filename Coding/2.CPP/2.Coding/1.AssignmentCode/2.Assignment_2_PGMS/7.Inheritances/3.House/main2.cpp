#include <iostream>
using namespace std;

class House
{
protected:
    int numberOfUnit;
    double unitPrice;

public:
    House(int nou, double up) : numberOfUnit(nou), unitPrice(up) {}
    virtual double totalPrice() = 0;
};

class Door : public House
{
public:
    Door(int nod, double pod) : House(nod, pod) {}

    double totalPrice() override
    {
        return numberOfUnit * unitPrice;
    }
};

class Window : public House
{
public:
    Window(int now, double pow) : House(now, pow) {}

    double totalPrice() override
    {
        return numberOfUnit * unitPrice;
    }
};

int main()
{
    Door door(2, 100.0);
    Window window(4, 50.0);

    cout << "Total price of door: " << door.totalPrice() << endl;
    cout << "Total price of window: " << window.totalPrice() << endl;
    cout << "Sum: " << door.totalPrice() + window.totalPrice() << endl;

    return 0;
}