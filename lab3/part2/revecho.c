#include <stdlib.h>
#include <stdio.h>
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

    removeAllNodes(&list);
    return 0;

}
