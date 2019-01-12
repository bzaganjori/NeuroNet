#include "Matrix.h"

Matrix::Matrix(size_t rows, size_t cols)
{
    // TODO: init a matrix of provided size with values all 0
}

Matrix::Matrix(std::vector< std::vector<int > v)
{
    this.elements = v;
    this.rows = v.size();
    this.cols = v[0].size();
}


Matrix::Transpose(std::vector< std::vector<int> > v)
{
    int i;
    int j;

    std::vector<std::vector<int> > result(v[0].size(), vector<int>(v.size(), 0));

    for (i = 0; i < new_height; i++)
    {
        for (j = 0; j < i; j++)
        {
            result[i][j] = m[j][i];
        }
    }
    return result;
}

Matrix::Add(std::vector< std::vector<int> > m2)
{
    int i;
    int j;

    if (m1.size() == m2.size() && m1[0].size() == m2[0].size())
    {
        vector<vector<int> > result(m1.size(), vector<int>(m1[0].size(), 0));

        for (i = 0; i < m1.size(); i++)
        {
            for (j = 0; j < m1[0].size(); j++)
            {
                result[i][j] = m1[i][j] + m2[i][j];
            }
        }

    return result;
    }
}

vector<vector<int> > Matrix::Multiply(vector<vector<int> > m1, vector<vector<int> > m2)
{
  int i;
  int j;
  int k;

  if (m1.size() == m2[0].size())
  {
    vector<vector<int> > result(m1[0].size(), vector<int>(m2.size(), 0));

    for (i = 0; i < m1[0].size(); i++)
      for (j = 0; j < m1.size(); j++)
        for (k = 0; k < m1[0].size(); k++)
          result[i][j] += m1[i][k] * m2[k][j];

    return result;
  }
}

vector<vector<int> > Matrix::Multiply_Scalar(vector<vector<int> > m, int scalar)
{
  int i;
  int j;

  vector<vector<int> > result(m);

  for (i = 0; i < m.size(); i++)
    for (j = 0; j < m[0].size(); j++)
      result[i][j] = m[i][j] * scalar;

  return result;
}

vector<vector<int> > Matrix::Kronecker_Multiplication(vector<vector<int> > m1, vector<vector<int> > m2)
{
  return m1;
}

vector<vector<int> > Matrix::Horizontal_Concatenation(vector<vector<int> > m1, vector<vector<int> > m2)
{
  int i;
  int j;

  if (m1[0].size() == m2[0].size())
  {
    vector<vector<int> > result ((m1.size() + m2.size()), vector<int> (m1[0].size(), 0));

    for (j = 0; j < m1[0].size(); j++)
    {
      for (i = 0; i < m1.size(); i++)
        result[i][j] = m1[i][j];
      for (i = m1.size(); i < m1.size() + m2.size(); i++)
        result[i][j] = m2[i][j];
    }

    return result;

  }
}

~Matrix()
{

}
