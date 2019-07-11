#include <stdio.h>
#include <stdlib.h>
// Double Linked List Example 1
// Add a Node at certain position

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

    printf("\n\n");
    //////////////////////////////////////////////////////////
    //////// Add node to certain position //////

    // let the user enter the position
    int x;
    printf("Please Enter position to insert After");
    scanf("%d", &x);

    // counter to determine the place to insert new node
    int counter = 1;

    // p1 pointer will point to what head point to
    struct Node *p1 = head;

    // while the counter is less than x move the p1 pointer to the next node
    while (counter < x) {
        p1 = p1->next;
        // increase the counter by 1 to make the loop stop at the position we want to add a new node after it
        counter++;
    }
    // create pointer p2 to point to what p1->next pointer point to
    struct Node *p2 = p1->next;
// create new node ( allocate new memory ) and pointer p3 will point to it
    struct Node *p3 = (struct Node *) malloc(sizeof(struct Node));
    // let the user enter the data of the new node
    printf("Enter the data of the new node : ");
    scanf("%d",&p3->data);
    // new node p3 next pointer will point to what p1->next point to
    p3->next = p1->next;
    // new node p3 prev pointer will point to what p2->prev point to
    p3->prev = p2->prev;
    // p1-> next pointer will point to p3
    p1->next = p3;
    // p2-> prev pointer will point to p3
    p2->prev = p3;

///////////////////////// Print all the new values after insertion of new node /////////////////

    // p4 pointer will point to the head
    struct Node *p4 = head;

    // whilte the p4 pointer not point to null
    while (p4 != NULL) {
        // print the data of the node/element which p pointer is point to
        printf("%d\n", p4->data);
        // p pointer will point to what next pointer point to in the current node/element
        p4 = p4->next;
    }


    return 0;
}