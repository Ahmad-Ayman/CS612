

//////////////////////////////////////////////
/// Problem 4
/// Write a C program to reverse order of data inside a double linked list
//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; // data of each node
    struct Node *next; // pointer of each node to point on the next node
    struct Node *prev;
};

int main() {
    /// the linked list is here
    /// Start of Creating the double Single Linked List  ///
    int n2;
    printf("Enter the size of the second linked list : ");
    scanf("%d", &n2);

    struct Node *head2 = NULL;
    struct Node *addNodes2;
    // Allocate 1 nodes in the heap/memory
    head2 = (struct Node *) malloc(sizeof(struct Node));
    printf("Input data for node 1 : ");
    scanf("%d", &head2->data);
    head2->next = NULL;
    head2->prev = NULL;

    int x2;

    struct Node *temp2;
    temp2 = head2;
    for (int i = 2; i <= n2; i++) {
        addNodes2 = (struct Node *) malloc(sizeof(struct Node));
        if (addNodes2 == NULL) {
            printf("Memory can not be allocated.");
            break;
        } else {
            printf("Input data for node %d : ", i);
            scanf("%d", &x2);
            addNodes2->data = x2;
            addNodes2->next = NULL;
            addNodes2->prev = temp2;
            temp2->next = addNodes2;
            temp2 = temp2->next;
        }
    }


    int count = 1;
    int temp;


    struct Node *p1 = head2;
    struct Node *p2 = head2;

    while (p2->next != NULL) {
        p2 = p2->next;
        count++;
    }
    int i;
    /// for looping half times of the count to swap the first with last and so on
    for (i = 0; i < count / 2; i++) {
        temp = p2->data;
        p2->data = p1->data;
        p1->data = temp;
        p2 = p2->prev;
        p1 = p1->next;
    }

    /// Printing The New Linked List ///

    struct Node *printing = head2;
    while (printing != NULL) {
        printf("Data = %d\n", printing->data);
        printing = printing->next;
    }

    return 0;
}