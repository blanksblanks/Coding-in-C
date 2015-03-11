#include <stdio.h>
#include <string.h>

char d[20];
char c[] = "abc"; // same as {'a','b','c','\0'}
strcpy(d, "123");
strcat(d, c);
printf("%s\n", d); // print 123abc
printf("%lu\n", strlen(d)); // print 6

// to only copy/cat the first n chars:
strncpy(d, "456", 2);
strncat(d, "def", 2);
printf("%s\n", d); // what does this print?
