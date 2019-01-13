#include "Matrix.h"

Matrix::Matrix(void) : _rows(1), _cols(1)
{
    AllocateMemory();
    this->elements[0][0] = 0;
}

Matrix::Matrix(size_t rows, size_t cols) : _rows(rows), _cols(cols)
{
    size_t i;
    size_t j;

    AllocateMemory();
    for (i = 0; i < _rows; i++)
    {
      for (j = 0; j < _cols; j++)
      {
        this->elements[i][j] = 0;
      }
    }
}

Matrix::Matrix(const Matrix& m) : _rows(m._rows), _cols(m._cols)
{
    size_t i;
    size_t j;

    AllocateMemory();
    for (i = 0; i < _rows; i++)
    {
      for (j = 0; j < _cols; j++)
      {
        this->elements[i][j] = m.elements[i][j];
      }
    }
}

Matrix::~Matrix()
{
    size_t i;
    for (i = 0; i < _rows; i++)
    {
      delete[] this->elements[i];
    }
    delete[] this->elements;
}

Matrix Matrix::Transpose()
{
    size_t i;
    size_t j;

    Matrix tempMatrix(_cols, _rows);
    for (i = 0; i < _rows; i++)
    {
        for (j = 0; j < _cols; j++)
        {
            tempMatrix.elements[j][i] = this->elements[i][j];
        }
    }
    return tempMatrix;
}

Matrix Matrix::Inverse()
{
    // TODO: complex
}

Matrix Matrix::Add(const Matrix& m)
{
    size_t i;
    size_t j;

    // TODO: Assume that both this and m are of same size?
    Matrix ret(_rows, _cols);
    for (i = 0; i < _rows; i++)
    {
        for (j = 0; j < _cols; j++)
        {
            ret[i][j] = this->elements[i][j] + m.elements[i][j];
        }
    }
    return ret;
}

Matrix Matrix::Subtract(const Matrix& m)
{
    // TODO
}

Matrix Matrix::Multiply(const Matrix& m)
{
    // TODO
}

Matrix Matrix::Divide(const Matrix& m)
{
    // TODO
}

double Matrix::DotProduct(Matrix m1, Matrix m2, int s)
{
    // TODO
}

Matrix Matrix::Multiply_Scalar(int s)
{
    size_t i;
    size_t j;

    Matrix ret(_rows, _cols);
    for (i = 0; i < _rows; i++)
    {
        for (j = 0; j < _rows; j++)
        {
            ret[i][j] = this->elements[i][j] * s;
        }
    }

    return ret;
}

Matrix Matrix::Hadamard_Multiplication(const Matrix& m)
{
    size_t i;
    size_t j;

    Matrix ret(_rows, _cols);
    for (i = 0; i < _rows; i++)
    {
        for (j = 0; j < _rows; j++)
        {
            ret[i][j] = this->elements[i][j] * m.elements[i][j];
        }
    }

    return ret;
}

Matrix Matrix::Kronecker_Multiplication(const Matrix& m)
{
    // TODO
}

Matrix Matrix::Horizontal_Concatenation(const Matrix&)
{
    // TODO
}

Matrix Matrix::OutputToClass()
{
    size_t i;
    size_t j;
    int index;

    Matrix ret(_rows, 1);
    for (i = 0; i < _rows; i++)
    {
        for (j = 0; j < _cols; j++)
        {
            if (this->elements[i][j] == 1)
            {
                index = j;
                break;
            }
        }
        ret[i][0] = index;
    }

    return ret;
}

Matrix Matrix::ClassToOutput()
{
    // TODO:
}

void Matrix::AllocateMemory()
{
    int i;

    this->elements = new double*[_rows];
    for (i = 0; i < _rows; i++)
    {
        this->elements[i] = new double[_cols];
    }
}
