#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mylist.h"

static void printString(void *p) {
    printf("%s\n", (char *)p);
    // if I add another * in front it complains I'm passing an int - why?
}

int main(int argc, char **argv) {

    // initialize list
    struct List list;
    initList(&list);
    
    // pass arg strings into list without duplicating them
    int i;
    for (i = 1; i < argc; i++)
        addFront(&list, argv[i]); // call on all strings, adding next to front
    traverseList(&list, &printString); // traverse list and print strings

    struct Node *node;
    node = findNode(&list, "dude", (int (*)(const void *, const void *))&strcmp);
    // initial error: expected ‘int (*)(const void *, const void *)’
    // but argument is of type ‘int (*)(const char *, const char *)’
    // therefore we cast strcmp to func pointer with void * input
    if (node == NULL)
        printf("\ndude not found\n");
    else
        printf("\ndude found\n");

    removeAllNodes(&list);
    return 0;

}
