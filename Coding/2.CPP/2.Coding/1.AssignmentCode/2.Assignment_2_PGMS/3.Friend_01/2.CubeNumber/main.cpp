#include <iostream>
using namespace std;
class Cube
{
    int number;

public:
    Cube(int number) : number(number) {}
    friend void uptoCube(const Cube &cube);
};

void uptoCube(const Cube &cube)
{
    for (int i = 1; i <= cube.number; i++)
    {
        cout << "Cube of " << i << " is: " << i * i * i << endl;
    }
}

int main(int argc, char const *argv[])
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    Cube c(number);
    uptoCube(c);
    return 0;
}
