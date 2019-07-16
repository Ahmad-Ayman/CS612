

//////////////////////////////////////////////
/// Problem 1
/// Write a C program to check if linked list is circular or not ( size = n )
//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; // data of each node
    struct Node *next; // pointer of each node to point on the next node
};

int main() {

    /// insert data to linked list first
    int n;
    printf("Enter the size of the linked list : ");
    scanf("%d", &n);


/// Start of to Test the Circular Linked List ( uncomment this section and comment the next section of single linked list ) ///
//    // create 1 pointers
//    struct Node *head, *second;
//    struct Node *addNodes;
//    // Allocate 1 nodes in the heap/memory
//    head = (struct Node *) malloc(sizeof(struct Node));
//    second = (struct Node *) malloc(sizeof(struct Node));
//    printf("Input data for node 1 : ");
//    scanf("%d", &head->data);
//    printf("Input data for node 2 : ");
//    scanf("%d", &second->data);
//    head->next = second;
//    second->next = head;
//    int x;
//
//    struct Node *temp;
//    temp = head;
//    for (int i = 3; i <= n; i++) {
//        addNodes = (struct Node *) malloc(sizeof(struct Node));
//        if (addNodes == NULL) {
//            printf("Memory can not be allocated.");
//            break;
//        } else {
//            printf("Input data for node %d : ", i);
//            scanf(" %d", &x);
//            addNodes->data = x;
//            addNodes->next = head;
//            temp->next = addNodes;
//            temp = temp->next;
//        }
//    }

/// End of circular Linked List ///

    /// Start of To Test Single Linked List ( un comment from here to the end of it ) and ( comment the circular Linked List ) ///
    struct Node *head = NULL;
    struct Node *addNodes;
    // Allocate 1 nodes in the heap/memory
    head = (struct Node *) malloc(sizeof(struct Node));
    printf("Input data for node 1 : ");
    scanf("%d", &head->data);
    head->next = NULL;

    int x;

    struct Node *temp;
    temp = head;
    for (int i = 2; i <= n; i++) {
        addNodes = (struct Node *) malloc(sizeof(struct Node));
        if (addNodes == NULL) {
            printf("Memory can not be allocated.");
            break;
        } else {
            printf("Input data for node %d : ", i);
            scanf("%d", &x);
            addNodes->data = x;
            addNodes->next = NULL;
            temp->next = addNodes;
            temp = temp->next;
        }
    }

/// End of Single Linked List ///

/// Start of checking whether circular or single
    struct Node *p = head;


    while (p->next != NULL && p->next != head) {
        p = p->next;
    }
    if (p->next == NULL) {
        printf("Single Linked List\n");
    } else {
        printf("Circular Linked List \n");
    }

    return 0;
}