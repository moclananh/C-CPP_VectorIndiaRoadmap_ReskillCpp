#include <iostream>
using namespace std;
int main()
{

    int a[5] = {10, 20, 30, 40, 50};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Size of array: " << size << endl;
    for (const auto &i : a)
    {
        cout << i << " ";
    }

    // reverse array
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    cout << "\nafter reverse: " << endl;
    for (const auto &i : a)
    {
        cout << i << " ";
    }
}