CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -g

# the targets you build are: executable, .a, .o files

# your test program, mylist-test, must link with the lib file
# not the mylist.o file
mylist-test: libmylist.a

libmylist.a: mylist.o

# TODO: ask?  when you link .o files and .a files together
# .a files must come after .o files in gcc command line

mylist-test.o: mylist.h
mylist.o: mylist.h

.PHONY: clean	
clean:
	rm -f *.o *~ a.out libmylist.a mylist-test

.PHONY: all
clean: clean libmlist.a mylist-test
