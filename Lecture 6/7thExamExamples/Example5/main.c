
//////////////////////////////////////////////
/// Problem 5
/// Write a C program to check if linked list has loop ( means if this linked list has circular loop )
//////////////////////////////////////////////


/* solution 1
create linked list other one , pointer p will start from head then save the address of first node
 in the new linked list, then go to the next one and check if it's address already exist in the new linked list
 then it's loop if not add it to the linked list and so on.....

 */

#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *next;
};


int main() {
    struct node *head, *second, *third, *fourth, *fifth, *sixth;

    //Construct the linked list
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    fourth = (struct node *) malloc(sizeof(struct node));
    fifth = (struct node *) malloc(sizeof(struct node));
    sixth = (struct node *) malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 2;
    fourth->next = fifth;

    fifth->data = 1;
    fifth->next = sixth;

    sixth->data = 44;
    sixth->next = second;

    //Check of linked list has loop
    struct node *ptrs[6];
    struct node *p = head;
    int count = 1, flag = 0;

    //Traverse the linked list until p points to NULL
    while (p != NULL) {
        for (int i = 0; i < count; i++) {
            if (p == ptrs[i]) {
                printf("\nLinked list has loop, stop execution!!");

                flag = 1;
                break;
            }

        }
        //If loop is detected, no need to continue traversing
        if (flag == 1)
            break;

        printf("Node %d\n", count);
        ptrs[count - 1] = p;
        count++;
        p = p->next;
    }

    //If traversing the linked list ended and flag still 0
    if (flag == 0)
        printf("\nNo loop detected..");
    return 0;
}
