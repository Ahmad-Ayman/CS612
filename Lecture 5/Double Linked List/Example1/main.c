#include <stdio.h>
#include <stdlib.h>

// Double Linked List Example 1
// Add a Node at the Front
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

    // allocate new memory ( new node )
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

    //  new node data will be = 0
    new_node -> data = 0;
    // new node next pointer will point to what head pointer point to
    new_node ->next = head;
    // new node prev pointer will point to null
    new_node->prev = NULL;
    // head prev pointer will point to what new node pointer point to
    head->prev = new_node;

    // the new node will be what head pointer point to
    head = new_node;
    return 0;
}
