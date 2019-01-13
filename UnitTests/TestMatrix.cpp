#include <assert.h>

#include "TestMatrix.h"
#include "../Matrix.h"

void TestUnitSize();
void TestSize();
void TestMatrixCopy();
void TestDispose();
void TestTranspose();
void TestInverse();
void TestAdd();
void TestSubtract();
void TestMultiply();
void TestDivide();
void TestDotProduct();
void TestMultiplyScalar();
void TestKronecker();
void TestHorizontalConcatenation();

int main()
{
    TestUnitSize();
    TestSize();
    TestMatrix();
    TestDispose();
    TestTranspose();
    TestInverse();
    TestAdd();
    TestSubtract();
    TestMultiply();
    TestDivide();
    TestDotProduct();
    TestMultiplyScalar();
    TestKronecker();
    TestHorizontalConcatenation();
    return 1;
}

void TestMatrix::TestUnitSize()
{
    Matrix m();
    assert(m.num_rows() == 1);
    // assert(m.num_rows() == 1);
}

/*void TestSize()
{
    Matrix m = new Matrix(3, 4);
    assert(m.num_rows() == 3);
    assert(m.num_cols() == 4);
}

void TestMatrixCopy()
{
    Matrix m = new Matrix(2, 2);
    m[0][0] = 1;
    m[0][1] = 2;
    m[1][0] = 3;
    m[1][1] = 4;

    Matrix newM = new Matrix(m);
    assert(newM[0][0] == 1);
    assert(newM[0][1] == 2);
    assert(newM[1][0] == 3);
    assert(newM[1][1] == 4);
}

void TestDispose()
{

}

void TestTranspose()
{

}

void TestInverse()
{

}

void TestAdd()
{

}

void TestSubtract()
{

}

void TestMultiply()
{

}

void TestDivide()
{

}

void TestDotProduct()
{

}

void TestMultiplyScalar()
{

}

void TestKronecker()
{

}

void TestHorizontalConcatenation()
{

} */
