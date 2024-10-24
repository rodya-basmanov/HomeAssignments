TARGET = assignment3

SRCS = main.cpp \
       autobot.cpp \
       decepticon.cpp \
       dinobot.cpp \
       engine.cpp \
       transformer.cpp \
       weapon.cpp

TEST_SRCS = test.cpp

HEADERS = autobot.h \
          decepticon.h \
          dinobot.h \
          engine.h \
          transformer.h \
          weapon.h

OBJS = $(SRCS:.cpp=.o)
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $<

test: $(OBJS) $(TEST_SRCS)
	$(CXX) $(CXXFLAGS) -o test_program $(TEST_SRCS) $(OBJS) -lgtest -lpthread

clean:
	rm -f $(OBJS) $(TARGET) test_program

.PHONY: all clean test

