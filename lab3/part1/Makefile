CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -g

# the targets you build are: executable, .a, .o files

# executable file - your test program must link with lib not .o file
mylist-test: libmylist.a

# .a library file
libmylist.a: mylist.o
	ar rc $@ mylist.o
	ranlib $@

# ar: create modify and extract from archives
# generate index to archive, equivalent to ar -s
# $@: $(OBJECTS) maps back to the $(TARGET) mylist-lib.a
# "put the target for this Makefile source here and all the objects after that"

# note: when you link .o files and .a files together
# .a files must come after .o files in gcc command line
# here it is recursively called

# .o files
mylist-test.o: mylist-test.c mylist.h
mylist.o: mylist.c mylist.h

.PHONY: clean	
clean:
	rm -f *.o *~ a.out core mylist-test libmylist.a

.PHONY: all
all: clean mylist-test

# libmylist.a recursively needed, so no need to specify ^
