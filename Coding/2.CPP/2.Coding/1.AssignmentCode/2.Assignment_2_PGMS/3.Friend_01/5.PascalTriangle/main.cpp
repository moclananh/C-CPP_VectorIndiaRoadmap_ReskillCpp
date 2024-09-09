#include <iostream>
#include <iomanip>
using namespace std;

class PascalTriangle
{
private:
    int n;
    int **arr;

public:
    PascalTriangle(int n)
    {
        this->n = n;
        arr = new int *[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = new int[i + 1];
        }
    }

    ~PascalTriangle()
    {
        for (int i = 0; i < n; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }

    friend void display(PascalTriangle &pt);
};

void display(PascalTriangle &pt)
{
    for (int i = 0; i < pt.n; i++)
    {
        // Print spaces
        for (int j = 0; j < pt.n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                pt.arr[i][j] = 1;
            }
            else
            {
                pt.arr[i][j] = pt.arr[i - 1][j - 1] + pt.arr[i - 1][j];
            }
            cout << setw(4) << pt.arr[i][j]; // Set the width to 4
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    PascalTriangle pt(n);
    display(pt);
    return 0;
}