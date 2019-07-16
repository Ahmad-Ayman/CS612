

//////////////////////////////////////////////
/// Problem 3
/// Write a c code to check if the 2 single linked lists are identical in size and values
/////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; // data of each node
    struct Node *next; // pointer of each node to point on the next node
};

int main() {

    /// insert data to  2 linked list first


    /// Start of Creating the first Single Linked List  ///
    int n;
    printf("Enter the size of the first linked list : ");
    scanf("%d", &n);


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

    /// End of first Single Linked List ///

    /// Start of Creating the second Single Linked List  ///
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
            temp2->next = addNodes2;
            temp2 = temp2->next;
        }
    }

/// End of first Single Linked List ///


    struct Node *p1 = head;
    struct Node *p2 = head2;
    int flag = 0;
    while (p1 != NULL && p2 != NULL) {
        if (p1->data == p2->data) {
            p1 = p1->next;
            p2 = p2->next;
        } else {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Not Identical");
    else if (p1 == p2) {
        printf("identical");
    } else {
        printf("not identical");
    }
    return 0;
}