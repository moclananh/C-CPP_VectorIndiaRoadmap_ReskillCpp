#include <iostream>
// Define a class called "Car"
class Car
{
private:
    // Member variables (data)
    std::string color;
    int year;

public:
    // Constructor (special member function)
    Car(std::string c, int y)
    {
        color = c;
        year = y;
    }

    // Member function
    void printDetails()
    {
        std::cout << "Color: " << color << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};