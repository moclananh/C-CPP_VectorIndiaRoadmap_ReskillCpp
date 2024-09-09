#include <iostream>
int main(int argc, char const *argv[])
{
    int a = 65;
    int *p = &a;
    char *ch = reinterpret_cast<char *>(p);
    std::cout << *ch << std::endl; // In ra ký tự 'A' (ASCII 65)

    int *p = new int(10);
    uintptr_t addr = reinterpret_cast<uintptr_t>(p);
    std::cout << "Address: " << addr << std::endl;

    return 0;
}
