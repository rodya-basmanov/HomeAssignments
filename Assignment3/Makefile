all: program

program: main.o autobot.o transformer.o
	g++ -o program main.o autobot.o transformer.o

main.o: main.cpp autobot.h
	g++ -std=c++17 -Wall -c main.cpp

autobot.o: autobot.cpp autobot.h transformer.h
	g++ -std=c++17 -Wall -c autobot.cpp

transformer.o: transformer.cpp transformer.h
	g++ -std=c++17 -Wall -c transformer.cpp

clean:
	rm -f *.o assignment3
