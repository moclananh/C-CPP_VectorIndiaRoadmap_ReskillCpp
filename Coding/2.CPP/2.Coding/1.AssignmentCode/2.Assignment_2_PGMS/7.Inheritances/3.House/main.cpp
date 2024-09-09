#include <iostream>
using namespace std;

// Base class House
class House
{
protected:
    double area;
    double doorCost;
    double windowCost;

public:
    House(double a, double dCost, double wCost) : area(a), doorCost(dCost), windowCost(wCost) {}

    virtual double calculateDoorCost(int numberOfDoors) = 0;
    virtual double calculateWindowCost(int numberOfWindows) = 0;

    double calculateTotalCost(int numberOfDoors, int numberOfWindows)
    {
        return calculateDoorCost(numberOfDoors) + calculateWindowCost(numberOfWindows);
    }
};

class Door : public House
{
public:
    Door(double a, double dCost, double wCost) : House(a, dCost, wCost) {}
    double calculateDoorCost(int numberOfDoors) override
    {
        return numberOfDoors * doorCost;
    }

    double calculateWindowCost(int numberOfWindows) override
    {
        return 0;
    }
};

class Window : public House
{
public:
    Window(double a, double dCost, double wCost) : House(a, dCost, wCost) {}

    double calculateWindowCost(int numberOfWindows) override
    {
        return numberOfWindows * windowCost;
    }

    double calculateDoorCost(int numberOfDoors) override
    {
        return 0;
    }
};

int main()
{
    double area, doorCost, windowCost;
    int numberOfDoors, numberOfWindows;

    // Input details for the house
    cout << "Enter the area of construction (in square meters): ";
    cin >> area;
    cout << "Enter the cost per door: ";
    cin >> doorCost;
    cout << "Enter the cost per window: ";
    cin >> windowCost;
    cout << "Enter the number of doors: ";
    cin >> numberOfDoors;
    cout << "Enter the number of windows: ";
    cin >> numberOfWindows;

    Door door(area, doorCost, windowCost);
    Window window(area, doorCost, windowCost);

    double totalCost = door.calculateTotalCost(numberOfDoors, numberOfWindows);
    double totalWindowCost = window.calculateTotalCost(numberOfDoors, numberOfWindows);

    cout << "Total cost for doors: " << door.calculateDoorCost(numberOfDoors) << endl;
    cout << "Total cost for windows: " << window.calculateWindowCost(numberOfWindows) << endl;
    cout << "Total construction cost: " << totalCost + totalWindowCost << endl;

    return 0;
}
