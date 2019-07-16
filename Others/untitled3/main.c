#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; // data of each node
    struct Node *next; // pointer of each node to point on the next node
};

int main() {
    // three pointers not pointing to anything
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // allocate 3 nodes in the heap ( memory )

    // will create a node/element in the memory ( y7gz mkan fe el memory ) with size of the Node struct and will make the head pointer point to it
    head = (struct Node *) malloc(sizeof(struct Node));
    // will create a node/element in the memory ( y7gz mkan fe el memory ) with size of the Node struct and will make the second pointer point to it
    second = (struct Node *) malloc(sizeof(struct Node));
    // will create a node/element in the memory ( y7gz mkan fe el memory ) with size of the Node struct and will make the third pointer point to it
    third = (struct Node *) malloc(sizeof(struct Node));

    // the element that head pointer point to make it's data = 1
    head->data = 1;
    // the element that head pointer point to make it's pointer next point to what pointer second point to
    head->next = second;
    // same as above
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    // create a new pointer point to what head pointer point to
    struct Node *p = head;

    //  while the pointer not point to null
    while (p != NULL) {
        // print the data of the node/element which p pointer is point to
        printf("%d\n", p->data);
        // p pointer will point to what next pointer point to in the current node/element
        p = p->next;
    }
    return 0;
}