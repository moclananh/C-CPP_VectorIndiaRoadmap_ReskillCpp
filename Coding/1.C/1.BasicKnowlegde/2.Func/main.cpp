// #include<iostream>
// using namespace std;
#include <stdio.h>
#include <iostream>
template <typename T>
void myFun(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x = 1, y = 2;
    std::cout << "Before swap " << "x: " << x << " y: " << y << std::endl;

    myFun(x, y);
    std::cout << "After swap x: " << x << " y: " << y << std::endl;
    return 0;
}
