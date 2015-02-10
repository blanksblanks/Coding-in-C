CC = gcc
CFLAGS = -c -Wall
DFLAGS = -c -Wall

convert: convert.o

convert.o: convert.c

.PHONY: clean
clean:
	rm -f *.o a.out convert

.PHONY: all
all: clean convert
