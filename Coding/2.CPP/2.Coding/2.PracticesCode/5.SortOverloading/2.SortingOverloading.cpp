#include <iostream>
using namespace std;
#define SIZE 5

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sortArr(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void sortArr(int arr[], int size, bool des)
{
    if (des = true)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] < arr[j])
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    else
        cout << "Invalid order.";
}

int main()
{
    int *arr = new int[SIZE];

    cout << "Enter 5 elements: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    sortArr(arr, SIZE);
    cout << "Sorted array in ascending order: ";
    printArray(arr, SIZE);

    sortArr(arr, SIZE, 1);
    cout << "Sorted array in descending order: ";
    printArray(arr, SIZE);
}