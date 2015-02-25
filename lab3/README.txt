Name: Nina Baculinao
Uni: nb2406

COMS W3157 Advanced Programming (Spring 2015)
Lab #3 Readme

***

mylist.c comments:

mylist-test tests the following functions in mylist:
- addFront
- traverseList
- flipSignDouble
- compareDouble
- findNode
- popFront
- addAfter
- reverseList

All work in accordance with lab specs.

Initially, I forgot to implement a removeAllNodes function because it was
not tested in "mylist-test.c" and I had followed the suggestions of
sequentially implementing the functions specified in test. However, while
looking over "mylist.h", I noticed this method was declared, so I
implemented it, tested it in revecho.c since I wasn't sure if we were
allowed to modify the skeleton test. Then I went back again and made sure
all methods declared in the header file were being implemented in the .c
file. I noticed during this second check that there was a isEmptyList static
method defined in the .h, so I changed all the equivalent instances of
"if (list->head == NULL) " to "if (!isEmptyList(list)" to make use of that
method.

Another thing I noticed was that "mylist-test.c" contains a die function
that prints an error to console and exits the system. This would be done if
certain variables returned NULL, and seemed to be there as a way of handling
malloc errors. I considered returning NULL if my newly malloc'd variable was
NULL, but since we were taught to always immediately check if malloc
returned a null variable immediately after calling malloc, eventually I
decided to keep the malloc and perror handling in "mylist.c", since I can't
be assured there will always exist a die function checking for return of
null values in the classes calling "mylist" library. I hope that makes
sense.

***

revecho.c comments:

revecho uses the linked list library created by mylist in part 1 to print
out command line arguments in reverse order and find the matching string
'dude'. there was a slight hiccup during the creation of the Makefile
because the library had been named mylist-lib.a instead of following the
naming conventions of libmylist.a, so gcc was initially unable to find the
library. everything should work now.

***

Valgrind output for mylist-test:
  
==31126== Memcheck, a memory error detector
==31126== Copyright (C) 2002-2011, and GNU GPL'd, by Julian Seward et al.
==31126== Using Valgrind-3.7.0 and LibVEX; rerun with -h for copyright info
==31126== Command: ./mylist-test
==31126== 
testing addFront(): 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 
testing flipSignDouble(): -9.0 -8.0 -7.0 -6.0 -5.0 -4.0 -3.0 -2.0 -1.0 
testing flipSignDouble() again: 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 
testing findNode(): OK
popped 9.0, the rest is: [ 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 8.0, the rest is: [ 7.0 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 7.0, the rest is: [ 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 6.0, the rest is: [ 5.0 4.0 3.0 2.0 1.0 ]
popped 5.0, the rest is: [ 4.0 3.0 2.0 1.0 ]
popped 4.0, the rest is: [ 3.0 2.0 1.0 ]
popped 3.0, the rest is: [ 2.0 1.0 ]
popped 2.0, the rest is: [ 1.0 ]
popped 1.0, the rest is: [ ]
testing addAfter(): 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 
popped 1.0, and reversed the rest: [ 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 ]
popped 9.0, and reversed the rest: [ 2.0 3.0 4.0 5.0 6.0 7.0 8.0 ]
popped 2.0, and reversed the rest: [ 8.0 7.0 6.0 5.0 4.0 3.0 ]
popped 8.0, and reversed the rest: [ 3.0 4.0 5.0 6.0 7.0 ]
popped 3.0, and reversed the rest: [ 7.0 6.0 5.0 4.0 ]
popped 7.0, and reversed the rest: [ 4.0 5.0 6.0 ]
popped 4.0, and reversed the rest: [ 6.0 5.0 ]
popped 6.0, and reversed the rest: [ 5.0 ]
popped 5.0, and reversed the rest: [ ]
==31126== 
==31126== HEAP SUMMARY:
==31126==     in use at exit: 0 bytes in 0 blocks
==31126==   total heap usage: 18 allocs, 18 frees, 288 bytes allocated
==31126== 
==31126== All heap blocks were freed -- no leaks are possible
==31126== 
==31126== For counts of detected and suppressed errors, rerun with: -v
==31126== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 2 from 2)

***
Valgrind output for revecho:

==16571== Memcheck, a memory error detector
==16571== Copyright (C) 2002-2011, and GNU GPL'd, by Julian Seward et al.
==16571== Using Valgrind-3.7.0 and LibVEX; rerun with -h for copyright info
==16571== Command: ./revecho reverse my words dude
==16571== 
dude
words
my
reverse

dude found
==16571== 
==16571== HEAP SUMMARY:
==16571==     in use at exit: 0 bytes in 0 blocks
==16571==   total heap usage: 4 allocs, 4 frees, 64 bytes allocated
==16571== 
==16571== All heap blocks were freed -- no leaks are possible
==16571== 
==16571== For counts of detected and suppressed errors, rerun with: -v
==16571== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 2 from 2)
