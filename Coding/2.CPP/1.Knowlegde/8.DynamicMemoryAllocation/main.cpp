#include <iostream>

int main()
{
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i * 2;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}