#include <iostream>
#define PI 3.14159265
using namespace std;

typedef class
{
    double radius;

public:
    // getter setter
    void SetRadius(double radius)
    {
        this->radius = radius;
    }
    double GetRadius()
    {
        return radius;
    }

    // func
    float Area()
    {
        return PI * GetRadius() * GetRadius();
    }
    double Circumference()
    {
        return 2 * PI * GetRadius();
    }
} Circle;

int main(int argc, char const *argv[])
{
    Circle c;
    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    c.SetRadius(radius);

    cout << "Radius: " << c.Area() << endl;
    cout << "Circumference: " << c.Circumference();
    return 0;
}
