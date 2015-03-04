#include <stdio.h>

int main() {
    int a[3] = {1, 3, 6};
    int *p = a; // p points to first element of a
    printf("*p: %d\n", *p);
    p = &a[0]; // same as above *p = a
    printf("p: %p\n", p); // return addr of pointer p
    printf("p+1: %p\n", p + 1); // return addr of next pointer
    printf("*p: %d\n", *p); // return value of pointer p: 1
    printf("*(p+1): %d\n", *(p+1)); // return value of next pointer: 3
    printf("*p++: %d\n", *p++); // return value of p: 1 and move p to next pointer
    printf("*p: %d\n", *p); // return value of moved pointer: 3
    printf("*p++: %d\n", *p++); // return value of p: 3 and move p to next pointer
    printf("*p: %d\n", *p); // return value of moved pointer: 6
    return 0;
}
