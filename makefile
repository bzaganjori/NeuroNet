CXX	= g++
LDL = -ldl
FLAGS = -g -Wall

# PATHS #
SRC_PATH = src
INCLUDE_PATH = include
BUILD_PATH = build
BIN_PATH = $(BUILD_PATH)/bin
BIN_NAME = main

all:

tests: matrix
	echo "Compiling unit tests..."
	$(CXX) $(FLAGS) -o $(BUILD_PATH)/Test.o $(SRC_PATH)/UnitTests/TestMatrix.cpp
	$(CXX) -o test $(BUILD_PATH)/Matrix.o $(BUILD_PATH)/Test.o

matrix: dirs
	$(CXX) $(FLAGS) -o $(BUILD_PATH)/Matrix.o -c $(SRC_PATH)/Matrix.cpp

dirs:
	echo "Creating directories..."
	mkdir -p $(BUILD_PATH)
	mkdir -p $(BIN_PATH)

clean:
	echo "Deleting directories..."
	rm -r $(BUILD_PATH)

main:
	$(CXX) -o Main -c ./Main.cpp
