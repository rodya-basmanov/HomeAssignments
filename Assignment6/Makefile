W = -g -Wall -Werror -Wpedantic
G = g++
A = Assignment6
SRC = test.cpp
OBJ = $(SRC:.cpp=.o)
GTEST_LIB = -lgtest -lgtest_main -pthread
STYLE = astyle -A1 -s4

$(A): $(OBJ)
	$(G) $(W) -o $(A) $(OBJ) $(GTEST_LIB)

%.o: %.cpp
	$(G) $(W) -c $< -o $@

clean:
	rm -f $(OBJ) $(A)

format:
	$(STYLE) $(SRC)

.PHONY: clean format