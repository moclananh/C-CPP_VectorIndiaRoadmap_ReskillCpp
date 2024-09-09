#include <iostream>

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    friend Complex operator+(const Complex &c1, const Complex &c2);

    void print()
    {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

Complex operator+(const Complex &c1, const Complex &c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main()
{
    Complex c1(3, 4);
    Complex c2(2, 1);

    Complex c = c1 + c2;

    c.print();

    return 0;
}