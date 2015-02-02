Name: Nina Baculinao
Uni: nb2406

COMS W3157 Advanced Programming (Spring 2015)
Lab# 1 Readme

***

PART 1:

HOW TO RUN
  1. Enter the "Lab 1/Part 1" directory in Terminal and run the command:
    $ make
  2. Run the file:
    $ ./main

NOTES
  My code works exactly as specified in the lab. It reads 2 positive
  integers from the user, and prints:
  - the average of the two
  - whether each number is a prime
  - whether the two numbers are relatively prime
  The average is calculated in "main.c", while "prime.c" checks whether a
  number is prime by first checking if the number is less than 4 (it must
  be prime), divisible by 2 or 3 (not prime), before running a for loop to
  check if there is any divisor between 5 and the square root of the number
  that will produce an integer quotient (if so, not prime) . The method
  to check whether two numbers are relatively prime is located in "gcd.c."
  I revisited Professor Kim's Fall 2014 Fundamentals of Computer Systems
  slides on MIPS ISA for the clean implementation of that GCD Algorithm and
  modified it to return 0 if the greatest common divisor was not equal to 1,
  and return 1 if the greatest common divisor was 1.

PART 2:

hOW TO RUN
  1. Enter the "Lab 1/Part 2" directory and run the command:
    $ make
  2. Run the file:
    $ ./convert

NOTES
  My code works exactly as specified in the lab. It reads 1 signed integer
  from the user, and prints the numebr in 4 different ways: a signed
  decimal, unsigned decimal, hexadecima, and binary. Jae provided us with
  the string format specifiers to accomplish the first three print
  statements. To convert a signed integer to binary, I check if x & (1 <<
  i), in other words if x and its i-th bit equal 1, and in that case print 1
  if it is, 0 if it is not, to reproduce x in binary form. I tested the code
  to produce the same values Jae showed in the lab 1 assignment.


