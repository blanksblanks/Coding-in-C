#include <stdio.h>

struct Node {
    void *data;
    struct Node *next;
};

int main(int argc, char **argv) {
    int a = 3;
    int b[10] = {0,1,2,3,4,5,6,7,8,9};
    struct Node arr[5] = {&a, arr+1, b, arr+2, "hello", arr+3};

    printf("b[2]: %d\n", b[2]);
    printf("sizeof(b): %lu\n", sizeof(b));
    printf("sizeof(&b[0]): %lu\n", sizeof(&b[0]));
    printf("hello\n");
    printf("arr[1].data[4]: %d\n", arr[1].data[4]);
    printf("arr[0].data[4]: %d\n", arr[0].data[4]);
    printf("sizeof(arr[3].next): %lu\n", sizeof(arr[3].next));
}
