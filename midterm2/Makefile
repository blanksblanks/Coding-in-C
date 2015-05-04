mdbtool: mdbtool.o
	gcc mdbtool.o -o mdbtool

mdbtool.o: mdbtool.c
	gcc -c mdbtool.c

i: Makefile
	echo 0 > i

# The "tr <c1> <c2>" command copies each byte from stdin to stdout,
# replacing every occurrence of <c1> with <c2>.  For example:
#
#	$ echo abcabc | tr 'c' '7'
#	ab7ab7
#

.PHONY: i++
i++: i
	cat i | tr '1' '2' | tr '0' '1' > t
	cat t > i

.PHONY: init
init:
	rm -f  mdb  *.o  mdbtool
	touch  Makefile

.PHONY: clean
clean: mdbtool i
	./mdbtool -x < i


