#include <iostream>
using namespace std;

typedef class
{
    double lenght;
    double width;

public:
    // getter setter
    void SetLenght(double lenght)
    {
        this->lenght = lenght;
    }
    double GetLenght()
    {
        return lenght;
    }
    void SetWidth(double width)
    {
        this->width = width;
    }
    double GetWidth()
    {
        return width;
    }

    // func
    float Area()
    {
        return GetWidth() * GetLenght();
    }
    double Perimeter()
    {
        return (GetWidth() + GetLenght()) * 2;
    }
} Rectangle;

int main(int argc, char const *argv[])
{
    Rectangle r;
    double lenght, width;
    cout << "Enter lenght and width of retangle: ";
    cin >> lenght >> width;
    r.SetLenght(lenght);
    r.SetWidth(width);

    cout << "Radius: " << r.Area() << endl;
    cout << "Perimeter: " << r.Perimeter();
    return 0;
}
