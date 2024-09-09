#include <iostream>
using namespace std;

class Matrix
{
    int rows;
    int cols;
    int **data;

public:
    Matrix(int _rows, int _cols) : rows(_rows), cols(_cols)
    {
        data = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
        }
    }
    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] data[i];
        }
        delete[] data;
    }

    void setElement(int r, int c, int val)
    {
        data[r][c] = val;
    }

    int getElement(int r, int c)
    {
        return data[r][c];
    }

    Matrix operator*(const Matrix &other);

    void display()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << data[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

Matrix Matrix::operator*(const Matrix &other)
{
    if (cols != other.rows)
    {
        cerr << "Matrix dimensions are incompatible for multiplication." << endl;
        exit(1);
    }
    Matrix result(rows, other.cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < other.cols; j++)
        {
            int sum = 0;
            for (int k = 0; k < cols; k++)
            {
                sum += data[i][k] * other.data[k][j];
            }
            result.data[i][j] = sum;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    Matrix m1(2, 3);
    m1.setElement(0, 0, 1);
    m1.setElement(0, 1, 2);
    m1.setElement(0, 2, 3);
    m1.setElement(1, 0, 4);
    m1.setElement(1, 1, 5);
    m1.setElement(1, 2, 6);

    Matrix m2(3, 2);
    m2.setElement(0, 0, 7);
    m2.setElement(0, 1, 8);
    m2.setElement(1, 0, 9);
    m2.setElement(1, 1, 10);
    m2.setElement(2, 0, 11);
    m2.setElement(2, 1, 12);

    Matrix result = m1 * m2;

    std::cout << "Matrix 1:" << std::endl;
    m1.display();

    std::cout << "Matrix 2:" << std::endl;
    m2.display();

    std::cout << "Result:" << std::endl;
    result.display();

    return 0;
}
