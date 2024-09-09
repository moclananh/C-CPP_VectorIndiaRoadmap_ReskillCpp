#include <iostream>
using namespace std;
int main()
{
    int var;
    int *ptr = &var;
    int *ptr_next = ptr + 1;
    cout << "Size of var: " << (char *)ptr_next - (char *)ptr << endl;
    return 0;
}