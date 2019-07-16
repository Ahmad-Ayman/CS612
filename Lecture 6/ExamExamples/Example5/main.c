
//////////////////////////////////////////////
/// Problem 5
/// Write a C program to check if linked list has loop ( means if this linked list has circular loop )
//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; // data of each node
    struct Node *next; // pointer of each node to point on the next node
};

int main() {

    /* solution 1
    create linked list other one , pointer p will start from head then save the address of first node
     in the new linked list, then go to the next one and check if it's address already exist in the new linked list
     then it's loop if not add it to the linked list and so on.....

     */
    return 0;
}