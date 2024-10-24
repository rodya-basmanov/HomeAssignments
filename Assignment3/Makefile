TARGET = assignment3

SRCS = main.cpp \
       autobot.cpp \
       decepticon.cpp \
       dinobot.cpp \
       engine.cpp \
       transformer.cpp \
       weapon.cpp

HEADERS = autobot.h \
          decepticon.h \
          dinobot.h \
          engine.h \
          transformer.h \
          weapon.h

OBJS = $(SRCS:.cpp=.o)

CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean

