#include <iostream>
using namespace std;
class ConstructionElement
{
protected:
    int numberOfUnit;
    double costPerOne;

public:
    ConstructionElement(int nou, double cpo) : numberOfUnit(nou), costPerOne(cpo) {}

    virtual int calculateCost()
    {
        return numberOfUnit * costPerOne;
    }
};

class Door : public ConstructionElement
{
public:
    Door(int door_num, double door_cost) : ConstructionElement(door_num, door_cost) {}
};

class Window : public ConstructionElement
{
public:
    Window(int win_num, double win_cost) : ConstructionElement(win_num, win_cost) {}
};

class House
{
private:
    int area;
    Door door;
    Window window;

public:
    House(int a, int door_num, double door_cost, int win_num, double win_cost)
        : area(a), door(door_num, door_cost), window(win_num, win_cost) {}

    int calculateTotalCost()
    {
        return area * 100 + door.calculateCost() + window.calculateCost();
    }

    void displayCost()
    {
        cout << "Total cost of constructing the house: $" << calculateTotalCost() << endl;
    }
};

int main()
{
    int area, door_num, door_cost, win_num, win_cost;

    cout << "Enter the area of the house: ";
    cin >> area;

    cout << "Enter the number and price per unit of the door: ";
    cin >> door_num >> door_cost;

    cout << "Enter the number and price per unit of the window: ";
    cin >> win_num >> win_cost;

    House house(area, door_num, door_cost, win_num, win_cost);
    house.displayCost();

    return 0;
}