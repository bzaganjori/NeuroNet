#ifndef _MATRIX_H
#define _MATRIX_H

#include <iostream>

class Matrix
{
	private:
		std::size_t _rows;
		std::size_t _cols;
		double **elements;
		void AllocateMemory();

	public:
		Matrix();
		Matrix(size_t rows, size_t cols);
		Matrix(const Matrix&);
		~Matrix();

		size_t num_rows();
		size_t num_cols();
		
		/* Simple modifiers */
		Matrix Transpose();
		Matrix Inverse();
		
		/* Basic operations */
		Matrix Add(const Matrix&);
		Matrix Subtract(const Matrix&);
  		Matrix Multiply(const Matrix&);
  		Matrix Divide(const Matrix&);

  		/* Additional operations */
  		double DotProduct(Matrix, Matrix, int);
  		Matrix Multiply_Scalar(int);
  		Matrix Kronecker_Multiplication(const Matrix&);
  		Matrix Horizontal_Concatenation(const Matrix&);
};
#endif
