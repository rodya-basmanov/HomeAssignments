CXX = g++
CXXFLAGS = -std=c++17 -Wall -I/usr/include -pthread
GTEST_DIR = ~/googletest/googletest/build/lib

SRC = autobot.cpp decepticon.cpp dinobot.cpp transformer.cpp
OBJ = $(SRC:.cpp=.o)
TEST_SRC = test.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)

all: test

test: $(OBJ) $(TEST_OBJ)
	$(CXX) $(OBJ) $(TEST_OBJ) -o test -L$(GTEST_DIR) -lgtest -lgtest_main -lpthread

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TEST_OBJ) test