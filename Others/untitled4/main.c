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
    struct Node *fourth = NULL;
    struct Node *fifth = NULL;
    int min, max, total=0, avg;

    // allocate 3 nodes in the heap ( memory )

    // will create a node/element in the memory ( y7gz mkan fe el memory ) with size of the Node struct and will make the head pointer point to it
    head = (struct Node *) malloc(sizeof(struct Node));
    // will create a node/element in the memory ( y7gz mkan fe el memory ) with size of the Node struct and will make the second pointer point to it
    second = (struct Node *) malloc(sizeof(struct Node));
    // will create a node/element in the memory ( y7gz mkan fe el memory ) with size of the Node struct and will make the third pointer point to it
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
    fifth = (struct Node *) malloc(sizeof(struct Node));


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    scanf("%d", &head->data);
    min=head->data; max=head->data;
    total+=head->data;
    scanf("%d", &second->data);
    total+=second->data;
    scanf("%d", &third->data);
    total+=third->data;
    scanf("%d", &fourth->data);
    total+=fourth->data;
    scanf("%d", &fifth->data);
    total+=fifth->data;
    printf("Average is : %d",total/5);

    return 0;
}