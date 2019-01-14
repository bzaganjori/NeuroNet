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

tests: dirs matrix
	echo "Compiling unit tests..."
	$(CXX) $(FLAGS) -o $(BUILD_PATH)/Test.o $(SRC_PATH)/UnitTests/TestMatrix.cpp

matrix:
	echo "Compling Matrix files..."
	$(CXX) $(FLAGS) -c $(INCLUDE_PATH)/Matrix.h $(SRC_PATH)/Matrix.cpp

dirs:
	echo "Creating directories..."
	mkdir -p $(BUILD_PATH)
	mkdir -p $(BIN_PATH)

clean:
	echo "Deleting directories..."
	rm -r $(BUILD_PATH)

main:
	$(CXX) -o Main -c ./Main.cpp
