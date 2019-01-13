#ifndef _MATRIX_H
#define _MATRIX_H

#include <iostream>
#include <vector>

class Matrix
{
	private:
		std::vector<vector<double> > elements;
		void AllocateMemory();

	public:
		Matrix();
		Matrix(size_t rows, size_t cols);
		Matrix(const Matrix&);
		~Matrix();

		size_t num_rows() const { return _rows; };
		size_t num_cols() const { return _cols; };
		double** get_elements() const { return elements; };

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
		Matrix Hadamard_Multiplication(const Matrix& m);
		Matrix Kronecker_Multiplication(const Matrix&);
  		Matrix Horizontal_Concatenation(const Matrix&);

		/* Conversion functions */
		Matrix OutputToClass();
		Matrix ClassToOutput();
};
#endif
