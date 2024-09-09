#include <iostream>
using namespace std;

class Transport
{
public:
    Transport() {}
    virtual double calculateFare(float distance) = 0;
    virtual ~Transport() {}
};

class Bus : public Transport
{
public:
    double calculateFare(float distance) override
    {
        return distance * 100;
    }
};

class Train : public Transport
{
public:
    double calculateFare(float distance) override
    {
        return distance * 200;
    }
};

class Flight : public Transport
{
public:
    double calculateFare(float distance) override
    {
        return distance * 500;
    }
};

void bookingTicket(Transport *transport, float distance)
{
    float fare = transport->calculateFare(distance);
    cout << "Total fare for your journey: $" << fare << endl;
}

int main(int argc, char const *argv[])
{
    float distance;
    cout << "Enter the distance of your journey: ";
    cin >> distance;

    Transport *transport;
    int choice;
    do
    {
        cout << "Transport Mode: \n"
             << "1. Bus | 100$/km\n"
             << "2. Train | 200$/km\n"
             << "3. Flight | 500$/km\n"
             << "Choose a transport mode: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            transport = new Bus();
            break;
        case 2:
            transport = new Train();
            break;
        case 3:
            transport = new Flight();
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice < 1 || choice > 3);

    bookingTicket(transport, distance);

    delete transport;
    return 0;
}
