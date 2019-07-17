
//////////////////////////////////////////////
/// Problem 5
/// Write a C program to check if linked list has loop ( means if this linked list has circular loop )
//////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>



struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

int main() {

/// Start of Creating the double Single Linked List  ///
    int n2;
    printf("Enter the size of the second linked list : ");
    scanf("%d", &n2);

    struct Node *head = NULL;
    struct Node *addNodes;
    struct Node *tempNode;
    // Allocate 1 nodes in the heap/memory
    head = (struct Node *) malloc(sizeof(struct Node));
    tempNode = (struct Node *) malloc(sizeof(struct Node));
    printf("Input data for node 1 : ");
    scanf("%d", &head->data);
    head->next = NULL;
    head->prev = NULL;

    int x2;

    struct Node *newTempNode;
    newTempNode = head;
    for (int i = 2; i <= n2; i++) {
        addNodes = (struct Node *) malloc(sizeof(struct Node));
        if (addNodes == NULL) {
            printf("Memory can not be allocated.");
            break;
        } else {
            printf("Input data for node %d : ", i);
            scanf("%d", &x2);
            addNodes->data = x2;
            addNodes->next = NULL;
            addNodes->prev = newTempNode;
            newTempNode->next = addNodes;
            newTempNode = newTempNode->next;
        }
    }


    struct Node *p1;
    struct Node *p2;
    p1 = head;
    p2 = head;
    while (p2->next != NULL) {
        p2 = p2->next;
    }
    p2->next = p2->prev;
    p2->prev = NULL;
    head = p2;
    p2 = p2->next;
    while (p2->prev != NULL) {
        tempNode->next = p2->next;
        tempNode->prev = p2->prev;
        p2->next = p2->prev;
        p2->prev = tempNode->next;
        p2 = p2->next;
    }
    p2->prev = p2->next;
    p2->next = NULL;



    /// Printing The New Linked List ///

    struct Node *printing = head;
    while (printing != NULL) {
        printf("Data = %d\n", printing->data);
        printing = printing->next;
    }

    return 0;
}