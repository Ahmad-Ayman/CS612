#include <stdio.h>
/// Circural Linked List

struct Node {
    // data of each Node
    int data;
    // pointer for the next
    struct Node *next;

};
int main() {
   p = head;
   while ( p-> next != head){
       printf("%d",p->data);
       p=p->next;
   }
   // to print the last item in the circular linked list
   printf("%d" , p->data);
    return 0;
}