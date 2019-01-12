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

libmatrix.so: Matrix.h Matrix.cpp
	$(CXX) -fPIC -c -shared Matrix.cpp -o Matrix.o
	$(CXX) -shared -Wl, -soname, libmatrix.so -o libmatrix.o Matrix.o

libgraph.so: GraphPlot.h GraphPlot.cpp
	$(CXX) -fPIC -c -shared GraphPlot.cpp -o GraphPlot.o
	$(CXX) -shared -Wl, -soname, libgraph.so -o libgraph.o GraphPlot.o

clean:
	rm *.so *.o
