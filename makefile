CC			= gcc
CXX			= g++
CFLAGS		= -g -fPIC
CXXFLAGS	= -g -fPIC
OFLAG		= -o
LDL			= -ldl
HEADERS		= *.h
SOURCE		= *.cpp
OUTPUT		= OUT.o

all: $(SOURCE)
	$(CXX) -o main main.o -L. -lshared

Matrix: Matrix.o
	$(CXX) -o Matrix Matrix.o

Matrix.o: Matrix.cpp Matrix.h
	$(CXX) -c Matrix.cpp Matrix.h

libmatrix.so: Matrix.h Matrix.cpp
	$(CXX) -fPIC -c -shared Matrix.cpp -o Matrix.o
	$(CXX) -shared -Wl, -soname, libmatrix.so -o libmatrix.o Matrix.o

clean:
	rm -r *.o *.gch
