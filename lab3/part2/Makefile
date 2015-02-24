# define the C compiler to use
CC = gcc
# define any directories containing header files other than ./
INCLUDES = -I ../part1
# define any compile-time flags
CFLAGS = -g -Wall $(INCLUDES)

# define library paths in addition to /usr/lib
# -Lpath option tells gcc where to look
LDFLAGS = -g -L../part1
# define any libraries to link into executable
# -l(lib)name option, i.e. -lmylist = libmylist.a, -lm = libm.so (math library)
# libmylist must follows naming conventions of libname to be recognized (mylist-lib.a NOT OK)
LDLIBS = -lmylist

# TODO: ask if there is a difference between LFLAGS and LDFLAGS, LDLIBS and LIBS?

# Equivalent to:
# gcc -g -Wall -I ../part1   -c -o revecho.o revecho.c
# gcc -g -L../part1  revecho.o  -lmylist -o revecho

revecho: revecho.o

revecho.o: revecho.c

.PHONY: clean	
clean:
	rm -f *.o *~ a.out core revecho

.PHONY: all
all: clean revecho
