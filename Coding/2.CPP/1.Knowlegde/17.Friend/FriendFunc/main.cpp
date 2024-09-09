#include <iostream>
using namespace std;
class Box
{
private:
    int length;

public:
    Box() : length(0) {}
    friend void printLength(Box box);
};

void printLength(Box box)
{
    // Có thể truy cập thành viên private
    cout << "Length of box: " << box.length << endl;
}