main: main.o linkedlist.o
	g++ -std=c++14 -Wall -g main.o linkedlist.o -o main

linkedlist.o: linkedlist.cpp linkedlist.h
	g++ -std=c++14 -Wall -g -c linkedlist.cpp

main.o: linkedlist.h main.cc
	g++ -std=c++14 -Wall -g -c main.cc

.PHONY: clean

clean:
	rm *.o main