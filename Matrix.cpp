#include "Matrix.h"

Matrix::Matrix() : _rows(1), _cols(1)
{
    AllocateMemory();
    this.elements[0][0] = 0;
}

Matrix::Matrix(size_t rows, size_t cols) : _rows(rows), _cols(cols)
{
    int i;
    int j;

    AllocateMemory();
    for (i = 0; i < _rows; i++)
    {
      for (j = 0; j < _cols; j++)
      {
        this.elements[i][j] = 0;
      }
    }
}

Matrix::Matrix(const Matrix& m) : _rows(m._rows), _cols(m._cols)
{
    int i;
    int j;

    AllocateMemory();
    for (i = 0; i < _rows; i++)
    {
      for (j = 0; j < _cols; j++)
      {
        this.elements[i][j] = m.elements[i][j];
      }
    }
}

Matrix::~Matrix()
{
    int i;
    for (i = 0; i < _rows; i++)
    {
      delete[] this.elements[i];
    }
    delete[] this.elements;
}

size_t num_cols()
{
  return this._cols;
}

size_t num_rows()
{
  return this._rows;
}

Matrix Matrix::Transpose()
{
    int i;
    int j

    Matrix tempMatrix(_cols, _rows);
    for (i = 0; i < _rows; i++)
    {
        for (j = 0; j < _cols; j++)
        {
            tempMatrix[j][i] = this.elements[i][j];
        }
    }
    return tempMatrix;
}

Matrix Matrix::Inverse()
{
    // TODO
}

Matrix Matrix::Add(const Matrix& m)
{
    // TODO
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
    // TODO
}

Matrix Matrix::Kronecker_Multiplication(const Matrix& m)
{
    // TODO
}

Matrix Matrix::Horizontal_Concatenation(const Matrix&)
{
    // TODO
}

void Matrix::AllocateMemory()
{
    int i;

    this.elements = new double*[_rows];
    for (i = 0; i < _rows; i++)
    {
        this.elements[i] = new double[_cols];
    }
}
