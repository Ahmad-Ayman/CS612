#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; // data of each node
    struct Node *next; // pointer of each node to point on the next node
};


int main() {
    // five pointers not pointing to anything
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;
    struct Node *fifth = NULL;

    int min, max, total = 0, avg;

    // allocate 5 nodes in the heap ( memory )

    // will create a node/element in the memory  with size of the Node struct and will make the head pointer point to it
    head = (struct Node *) malloc(sizeof(struct Node));
    // will create a node/element in the memory  with size of the Node struct and will make the second pointer point to it
    second = (struct Node *) malloc(sizeof(struct Node));
    // will create a node/element in the memory  with size of the Node struct and will make the third pointer point to it
    third = (struct Node *) malloc(sizeof(struct Node));
    // will create a node/element in the memory  with size of the Node struct and will make the fourth pointer point to it
    fourth = (struct Node *) malloc(sizeof(struct Node));
    // will create a node/element in the memory  with size of the Node struct and will make the fifth pointer point to it
    fifth = (struct Node *) malloc(sizeof(struct Node));

    // the next pointer of the node/element that the head pointer point to will be point to what second pointer point to
    head->next = second;
    // the next pointer of the node/element that the second pointer point to will be point to what third pointer point to
    second->next = third;
    // the next pointer of the node/element that the third pointer point to will be point to what fourth pointer point to
    third->next = fourth;
    // the next pointer of the node/element that the fourth pointer point to will be point to what fifth pointer point to
    fourth->next = fifth;
    // the next pointer of the node/element that the fifth pointer point to will be point to null
    fifth->next = NULL;

    // pointer p will point to what pointer head point to
    struct Node *p = head;
    // temp variable
    int temp;
    printf("Enter Data : ");
    // getting input from user and assign it to temp variable
    scanf("%d", &temp);
    // the data of the node/element that p pointer point to will be = temp ( p in this time point to the node/element that head pointer point to )
    p->data = temp;
    // add temp value to the total
    total += temp;
    // min variable will be = data of the node/element that p pointer point to
    min = p->data;
    // max variable will be = data of the node/element that p pointer point to
    max = p->data;
    // p pointer will now point to what next pointer of the node/element that p pointer was point to ( means the second pointer )
    p = p->next;
    // while the p not point to the NULL ( means the end of the linked list didn't  reached yet )
    while (p != NULL) {
        // get input from user
        scanf("%d", &temp);
        // put the input that user entered as value of the data of the node/element that p pointer is point to
        p->data = temp;
        // add the user input to the total variable to calculate the total of the inputs
        total += temp;
        if (p->data > max)
            max = p->data;
        if (temp < min)
            min = temp;
// p pointer will point to what next pointer point to
        p = p->next;

    }

    p = head;
    while (p != NULL) {
        // print the data of the node/element which p pointer is point to
        printf("%d\n", p->data);
        // p pointer will point to what next pointer point to in the current node/element

        p = p->next;

    }
    printf("Average = %d \nMinimum = %d \nMaximum = %d\n", total / 5, min, max);


    return 0;
}