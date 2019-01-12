#ifndef _MATRIX_H
#define _MATRIX_H

#include <iostream>
#include <vector>
#include <cstdlib>

class Matrix
{
	private:
		std::vector< std::vector<int> > elements;
		std::size_t rows;
		std::size_t cols;

	public:

		Matrix(size_t rows, size_t cols);
		// : elements(std::vector< std::vector<int> > (rows, std::vector(cols))) {}
		Matrix(std::vector< std::vector<int> > vector);
		~Matrix();

		int num_cols();
		int num_rows();
		const std::vector< std::vector<int> >& get_elements();

		void equals(Matrix& v);

		Matrix Transpose();
		Matrix Add(std::vector< std::vector<int> > v);
  		Matrix Multiply_Scalar(int scalar);
  		Matrix Multiply(std::vector< std::vector<int> > v);
  		Matrix Kronecker_Multiplication(std::vector< std::vector<int> > v);
  		Matrix Horizontal_Concatenation(std::vector< std::vector<int> > v);
};
#endif
