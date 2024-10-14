CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: assignment2b

assignment2b: assignment2b.o Stack.o
	$(CXX) $(CXXFLAGS) -o assignment2b assignment2b.o Stack.o

assignment2b.o: assignment2b.cpp Stack.h
	$(CXX) $(CXXFLAGS) -c assignment2b.cpp

Stack.o: Stack.cpp Stack.h
	$(CXX) $(CXXFLAGS) -c Stack.cpp

clean:
	rm -f *.o assignment2b

