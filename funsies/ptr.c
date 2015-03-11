#include <stdio.h>

int main() {
    int a[3] = {1, 3, 6};
    int *p = a; // p points to first element of a
    printf("*p: %d\t\t\treturn val of pointer p: first el of a\n", *p);
    p = &a[0]; // same as above *p = a
    printf("p: %p\treturn addr of pointer p\n", p); // return addr of pointer p
    printf("p+1: %p\treturn addr of next pointer\n", p + 1); // return addr of next pointer
    printf("*p: %d\t\t\treturn value of pointer p: 1\n", *p); // return value of pointer p: 1
    printf("*(p+1): %d\t\treturn value of next pointer: 3\n", *(p+1)); // return value of next pointer: 3
    printf("*p++: %d\t\t\treturn value of p: 1 and move p to next pointer\n", *p++); // return value of p: 1 and move p to next pointer
    printf("*p: %d\t\t\treturn value of moved pointer: 3\n", *p); // return value of moved pointer: 3
    printf("*p++: %d\t\t\treturn value of p: 3 and move p to next pointer\n", *p++); // return value of p: 3 and move p to next pointer
    printf("*p: %d\t\t\treturn value of moved pointer: 6\n", *p); // return value of moved pointer: 6
    return 0;
}
