#ifndef _MATRIX_H
#define _MATRIX_H

#include <iostream>
#include <vector>

class Matrix
{
	private:
		std::vector<std::vector<float> > elements;

	public:
		Matrix();
		Matrix(int, int);
		Matrix(const Matrix&);
		~Matrix();

		int rows() const { return elements.size(); };
		int cols() const { return elements[0].size(); };
		std::vector<std::vector<float> > get_elements() const { return elements; };

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
		Matrix Hadamard_Multiplication(const Matrix&);
		Matrix Kronecker_Multiplication(const Matrix&);
  		Matrix Horizontal_Concatenation(const Matrix&);

		/* Conversion functions */
		Matrix OutputToClass();
		Matrix ClassToOutput();

};
#endif
