#include <iostream>
using namespace std;
class Counter
{
    int count;

public:
    Counter(int c) : count(c) {}
    Counter operator++();
    Counter operator++(int);
    Counter operator--();
    Counter operator--(int);
    Counter operator+(const Counter &c);
    int getCount() const { return count; }
};

Counter Counter::operator++()
{
    count++;
    return *this;
}
Counter Counter::operator++(int)
{
    Counter temp = *this;
    count++;
    return temp;
}

Counter Counter::operator--()
{
    count--;
    return *this;
}

Counter Counter::operator--(int)
{
    Counter temp = *this;
    count--;
    return temp;
}

Counter Counter::operator+(const Counter &c)
{
    return Counter(count + c.count);
}

int main(int argc, char const *argv[])
{
    Counter c1(10);
    Counter c2(20);
    cout << "Initial count of c1: " << c1.getCount() << endl;
    cout << "Initial count of c2: " << c2.getCount() << endl;

    // Upward counting
    Counter c3 = ++c1;
    cout << "Count of c1 after increment: " << c1.getCount() << endl;
    cout << "Count of c3: " << c3.getCount() << endl;

    // Downward counting
    Counter c4 = --c2;
    cout << "Count of c2 after decrement: " << c2.getCount() << endl;
    cout << "Count of c4: " << c4.getCount() << endl;

    // Add two counters
    Counter c5 = c1 + c2;
    cout << "Count of c5 (c1 + c2): " << c5.getCount() << endl;

    return 0;
}
