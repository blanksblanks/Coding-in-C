CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -g

main: main.o prime.o

main.o: main.c prime.h

prime.o: prime.c prime.h

.PHONY: clean
clean:
	rm -f *.o a.out core main

.PHONY: all
all: clean main
