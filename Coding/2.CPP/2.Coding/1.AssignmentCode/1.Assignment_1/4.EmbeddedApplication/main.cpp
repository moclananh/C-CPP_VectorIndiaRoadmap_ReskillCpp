#include <iostream>

int ethernet_initialization(int speed = 100, int duplex = 1, int port = 0)
{
    std::cout << "Ethernet controller initialized with:" << std::endl;
    std::cout << "Speed: " << speed << " Mbps" << std::endl;
    std::cout << "Duplex: " << (duplex ? "Full" : "Half") << std::endl;
    std::cout << "Port: " << port << std::endl;
    return 0;
}

int main()
{
    ethernet_initialization();
    ethernet_initialization(1000);
    ethernet_initialization(1000, 0, 1);

    return 0;
}
