#include <iostream>

class Rectangle
{
private:
    int width;
    int height;

public:
    // Constructor với tham số
    Rectangle(int w, int h) : width(w), height(h)
    {
        std::cout << "Constructor called with width = " << width << " and height = " << height << std::endl;
    }

    // Constructor mặc định
    Rectangle() : width(0), height(0)
    {
        std::cout << "Default constructor called" << std::endl;
    }

    // Hàm để tính diện tích
    int area() const
    {
        return width * height;
    }
};

int main()
{
    Rectangle rect1(10, 20); // Gọi constructor với tham số
    Rectangle rect2;         // Gọi constructor mặc định

    std::cout << "Area of rect1: " << rect1.area() << std::endl;
    std::cout << "Area of rect2: " << rect2.area() << std::endl;

    return 0;
}
