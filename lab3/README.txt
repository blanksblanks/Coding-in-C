Tme: Nina Baculinao
Uni: nb2406

COMS W3157 Advanced Programming (Spring 2015)
Lab #3 Readme

***

***

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
