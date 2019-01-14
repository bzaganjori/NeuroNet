#include "../include/Matrix.h"

Matrix::Matrix(void)
{
    std::vector<std::vector<float> > elements(1, std::vector<float>(1, 0));
}

Matrix::Matrix(int rows, int cols)
{
    std::vector<std::vector<float> > elements(rows, std::vector<float>(cols, 0));
}

Matrix::Matrix(const Matrix& m)
{
    int i;
    int j;

    std::vector<std::vector<float> > elements(m.rows(), std::vector<float>(m.cols(), 0));

    for (i = 0; i < rows(); i++)
    {
      for (j = 0; j < cols(); j++)
      {
        elements[i][j] = m.elements[i][j];
      }
    }
}

Matrix::~Matrix()
{
    // TODO: Figure out how to delete vector of vectors
}

Matrix Matrix::Transpose()
{
    int i;
    int j;

    Matrix tempMatrix(cols(), rows());
    for (i = 0; i < rows(); i++)
    {
        for (j = 0; j < cols(); j++)
        {
            tempMatrix.elements[j][i] = elements[i][j];
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
    int i;
    int j;

    // TODO: Assume that both this and m are of same size?
    Matrix ret(rows(), cols());
    for (i = 0; i < rows(); i++)
    {
        for (j = 0; j < cols(); j++)
        {
            ret.elements[i][j] = elements[i][j] + m.elements[i][j];
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
    int i;
    int j;

    Matrix ret(rows(), cols());
    for (i = 0; i < rows(); i++)
    {
        for (j = 0; j < rows(); j++)
        {
            ret.elements[i][j] = elements[i][j] * s;
        }
    }
    return ret;
}

Matrix Matrix::Hadamard_Multiplication(const Matrix& m)
{
    int i;
    int j;

    Matrix ret(rows(), cols());
    for (i = 0; i < rows(); i++)
    {
        for (j = 0; j < rows(); j++)
        {
            ret.elements[i][j] = elements[i][j] * m.elements[i][j];
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
    int i;
    int j;
    int index;

    Matrix ret(rows(), 1);
    for (i = 0; i < rows(); i++)
    {
        for (j = 0; j < cols(); j++)
        {
            if (elements[i][j] == 1)
            {
                index = j;
                break;
            }
        }
        ret.elements[i][0] = index;
    }

    return ret;
}

Matrix Matrix::ClassToOutput()
{
    // TODO:
}
