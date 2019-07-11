#include <stdio.h>
#include <stdlib.h>

// Double Linked List Example 1
// delete a Node at the end
struct Node {
    // data of each Node
    int data;
    // pointer for the next
    struct Node *next;
    // pointer for the previous
    struct Node *prev;
};


int main() {
    // create 3 pointers
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    // Allocate 3 nodes in the heap/memory
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));

    // set data for head node
    head->data = 1;
    // set what the next pointer of head will point to ( the second node )
    head->next = second;
    // set what the previous pointer of head will point to ( null because it is the first node )
    head->prev = NULL;
    second->data = 2;
    second->next = third;
    second->prev = head;
    third->data = 3;
    third->next = NULL;
    third->prev = second;

///////////////////////// Print all the values till now /////////////////
    struct Node *p = head;

    while (p != NULL) {
        // print the data of the node/element which p pointer is point to
        printf("%d\n", p->data);
        // p pointer will point to what next pointer point to in the current node/element

        p = p->next;

    }
////////////////// delete last node //////////////////////
    // allocate new memory ( p1 and p2 )
    struct Node *p1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node *p2 = (struct Node*) malloc(sizeof(struct Node));
    p1 = head;

    while (p1->next != NULL) {
        p1 = p1->next;
    }
    p2 = p1->prev;
    free(p1);
    p2->next = NULL;

///////////////////////// Print all the new values after deletion of last node /////////////////

    struct Node *p4 = head;

    while (p4 != NULL) {
        // print the data of the node/element which p pointer is point to
        printf("%d\n", p4->data);
        // p pointer will point to what next pointer point to in the current node/element

        p4 = p4->next;

    }
    return 0;
}