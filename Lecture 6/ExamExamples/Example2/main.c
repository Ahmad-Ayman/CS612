

//////////////////////////////////////////////
/// Problem 2
/// Write a c code to count number of nodes in circular linked list
/////////////////////////////////////////////////



#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; // data of each node
    struct Node *next; // pointer of each node to point on the next node
};

int main() {

    /// insert data to linked list first


/// Start of Creating the Circular Linked List  ///
    // create 1 pointers
    struct Node *head, *second;
    struct Node *addNodes;
    // Allocate 1 nodes in the heap/memory
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    printf("Input data for node 1 : ");
    scanf("%d", &head->data);
    printf("Input data for node 2 : ");
    scanf("%d", &second->data);
    head->next = second;
    second->next = head;
    int x;

    struct Node *temp;
    temp = head;
    /// infinite loop to only stop the user from input data ( complete the linked list ) when the input from user is -1 ///
    for (int i = 3;; i++) {
        addNodes = (struct Node *) malloc(sizeof(struct Node));
        if (addNodes == NULL) {
            printf("Memory can not be allocated.");
            break;
        } else {
            printf("Input data for node %d : ", i);
            scanf("%d", &x);
            if (x == -1) {
                break;
            }
            addNodes->data = x;
            addNodes->next = head;
            temp->next = addNodes;
            temp = temp->next;
        }
    }

/// End of circular Linked List ///



    if (head == NULL)
        return 0;

    struct Node *p = head;
    int count = 2;
    while (p->next != head) {
        count++;
        p = p->next;
    }
    printf("number of nodes is : %d", count);
    return 0;
}