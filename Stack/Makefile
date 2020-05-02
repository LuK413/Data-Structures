main: main.o stack.o
	g++ -std=c++14 -Wall -g main.o stack.o -o main

stack.o: stack.h
	g++ -std=c++14 -Wall -g -c stack.h

main.o: main.cc stack.h
	g++ -std=c++14 -Wall -g -c main.cc

.PHONY: clean

clean:
	rm *.o main