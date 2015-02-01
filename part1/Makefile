CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -g

main: main.o prime.o gcd.o

main.o: main.c prime.h gcd.h

prime.o: prime.c prime.h

gcd.o: gcd.c gcd.h

.PHONY: clean
clean:
	rm -f *.o a.out core main

.PHONY: all
all: clean main
