# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++17

# Target executable
TARGET = main

# Source files
SRCS = main.cpp _add.cpp _subtract.cpp _divide.cpp _multiply.cpp

# Test source files
TEST_SRCS = _add.cpp _subtract.cpp _divide.cpp _multiply.cpp test.cpp test_main.cpp 

# Object files
OBJS = $(SRCS:.cpp=.o)
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Linking rule
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ -fprofile-arcs -ftest-coverage -L/usr/lib/x86_64-linux-gnu/CppUTest -lCppUTest

# Test executable
test: $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) $(TEST_OBJS) -fprofile-arcs -ftest-coverage -o test -L/usr/lib/x86_64-linux-gnu/CppUTest -lCppUTest

# Compilation rule
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -fprofile-arcs -ftest-coverage -c $< -o $@

# Clean rule
clean:
	rm -f $(TARGET) test $(OBJS) $(TEST_OBJS) *.gcda *.gcno *.gcov

# Run rule
run: $(TARGET)
	./$(TARGET)

# Coverage rule
coverage: $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -fprofile-arcs -ftest-coverage -o $(TARGET) $(TEST_OBJS) -L/usr/lib/x86_64-linux-gnu/CppUTest -lCppUTest
	./$(TARGET)
	gcov _*.cpp


.PHONY: all clean run coverage test
