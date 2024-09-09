#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    // Dynamically allocate memory for the matrices
    int **A = new int *[rows];
    int **B = new int *[rows];
    int **C = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        A[i] = new int[cols];
        B[i] = new int[cols];
        C[i] = new int[cols];
    }

    cout << "Enter the values for the first matrix (A):\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter the values for the second matrix (B):\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> B[i][j];
        }
    }

    // Perform the matrix addition (C = A + B)
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "The resulting matrix (C) is:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << C[i][j] << "\t";
        }
        cout << "\n";
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++)
    {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}