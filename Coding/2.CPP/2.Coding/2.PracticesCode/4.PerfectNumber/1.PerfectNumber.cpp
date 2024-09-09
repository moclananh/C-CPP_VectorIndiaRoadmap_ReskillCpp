#include <iostream>
using namespace std;
#define SIZE 5
bool isPerfectNumebr(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (sum == num);
}

int main()
{
    int *num = new int[SIZE];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> num[i];
    }

    cout << "Perfect number: ";
    bool flag;
    for (int i = 0; i < SIZE; i++)
    {
        if (isPerfectNumebr(num[i]))
        {
            cout << num[i] << " ";
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "Not found!";
    }

    delete[] num;

    return 0;
}