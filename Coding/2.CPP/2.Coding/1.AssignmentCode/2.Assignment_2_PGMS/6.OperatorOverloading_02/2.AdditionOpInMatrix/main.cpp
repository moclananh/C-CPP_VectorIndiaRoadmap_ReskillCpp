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

    friend Matrix operator+(const Matrix &m1, const Matrix &m2);

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

Matrix operator+(const Matrix &m1, const Matrix &m2)
{
    if (m1.rows != m2.rows || m1.cols != m2.cols)
    {
        cerr << "Matrix dimensions are incompatible for addition." << std::endl;
        exit(1);
    }
    Matrix result(m1.rows, m1.cols);
    for (int i = 0; i < m1.rows; i++)
    {
        for (int j = 0; j < m1.cols; j++)
        {
            result.data[i][j] = m1.data[i][j] + m2.data[i][j];
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    Matrix m1(2, 2);
    m1.setElement(0, 0, 1);
    m1.setElement(0, 1, 2);
    m1.setElement(1, 0, 3);
    m1.setElement(1, 1, 4);

    Matrix m2(2, 2);
    m2.setElement(0, 0, 5);
    m2.setElement(0, 1, 6);
    m2.setElement(1, 0, 7);
    m2.setElement(1, 1, 8);

    Matrix result = m1 + m2;

    std::cout << "Matrix 1:" << std::endl;
    m1.display();

    std::cout << "Matrix 2:" << std::endl;
    m2.display();

    std::cout << "Result:" << std::endl;
    result.display();

    return 0;
}
