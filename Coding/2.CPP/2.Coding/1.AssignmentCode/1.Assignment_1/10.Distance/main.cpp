#include <iostream>
using namespace std;

class Distance
{
    float feet;
    float inches;

public:
    Distance(float f = 0.0, float i = 0.0) : feet(f), inches(i) {}
    void display()
    {
        cout << feet << " feet, " << inches << " inches" << endl;
    }
    Distance operator+(const Distance &d);
    Distance operator-(const Distance &d);
};

Distance Distance::operator+(const Distance &d)
{
    float totalFeet = feet + d.feet;
    float totalInches = inches + d.inches;
    if (totalInches >= 12.0)
    {
        int extraFeet = totalInches / 12.0;
        totalFeet += extraFeet;
        totalInches -= extraFeet * 12.0;
    }
    return Distance(totalFeet, totalInches);
}

Distance Distance::operator-(const Distance &d)
{
    float totalFeet = feet - d.feet;
    float totalInches = inches - d.inches;
    if (totalInches < 0)
    {
        totalFeet -= 1.0;
        totalInches += 12.0;
    }
    return Distance(totalFeet, totalInches);
}

int main()
{
    Distance d1(5, 6.5);
    Distance d2(3, 8.2);

    Distance d3 = d1 + d2;
    d3.display();

    Distance d4 = d1 - d2;
    d4.display();

    return 0;
}