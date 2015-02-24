#include <stdio.h>
#include <stdlib.h>
#include "mylist.h"

// 1: make a new node to store *data,  a pointer to some variable the user has
// 2: set next of this new node appropriately
// 3: set the head of the list to this node
struct Node *addFront(struct List *list, void *data) {
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL) {
        perror("malloc returned NULL");
        exit(1); // Q: is this always called perror?
    }

    p->data = data; // 1 data should point at data
    p->next = list->head; // 2 next should be current head
    list->head = p; // 3 new head should be newly added node
    return p;
}

// visit each node in the list and call f on data as we visit each node
void traverseList(struct List *list, void (*f)(void *)) {
    struct Node *p = list->head; // start at head
    while (p != NULL) { // keep going until next node is null
        f(p->data);
        p = p->next;
    }
}

void flipSignDouble(void *data) { 
    *(double *)data *= - 1.0;
    // fixes error prompt re incompatible assignment of double * to void *
    // double *data_double = *(double *)data * - 1.0;
    // data = *(void *)data_double;
}

// just cast, dereference and compare - return 0 if equal, 1 otherwise
int compareDouble(const void *data1, const void *data2) {
    if (*(double *)data1 == *(double *)data2)
        return 0;
    return 1;
}

struct Node *findNode(struct List *list, const void *dataSought, int (*compar)(const void*, const void*)) {
    struct Node *p = list->head;
    while (p != NULL) {
        if (compar(p->data, dataSought) == 0)
            return p;
        else
            p = p->next;
    }
    return NULL;
}

// change the head of the list to the next node
// unallocate the old head and return its data
void *popFront(struct List *list) {
    if (list->head == NULL) return NULL;
    struct Node *ex = list->head;
    list->head = ex->next;
    void *data = ex->data;
    free(ex);
    return data;
}

// if prevnode is null, func should behave like addfront
// assume prevnode to be in the list, add new node containing data after prevnode
// use same ideas findNode: go through list until you find match
// reroute some next pointers to 'insert' node you just made into list
struct Node *addAfter(struct List *list, struct Node *prevNode, void *data) {
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL) {
        perror("malloc returned NULL");
        exit(1);
    }
    p->data = data;
    if (list->head == NULL) { 
        p->next = NULL;
        list->head = p; // forgot this for a bit, hehe, so nothing was getting added to list
    } else {
        p->next = prevNode->next; // if you flip the order of these two lines 
        prevNode->next = p; // the last element you add on gets added on infinitely
    }
    return p;
}

void reverseList(struct List *list) {
    struct Node *prv = NULL; // from .h hints: this is how method should start
    struct Node *cur = list->head; // start out with head
    struct Node *nxt;
    while (cur != NULL) {
        nxt = cur->next; // save reference to next node so it doesn't get lost
        cur->next = prv; // set each node's next to previous node
        prv = cur; // set previous node to current node so it becomes next for next cur
        cur = nxt; // move on to next node in this iteration
    }
    list->head = prv; // don't forget this
}
