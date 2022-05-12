#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

 struct node{
    int data;
    struct node* next;
};

    // Given a reference (pointer to pointer) to the head.
    // of a list and an int, push a new node on the front of the list.
    // Creates a new node with the int, links the list off the .next of the
    // new node, and finally changes the head to point to the new node.

void Push(struct node** headRef, int newData)
{
    struct node* newNode;
    newNode = (struct node*) malloc(sizeof(struct node)); // allocate node
    newNode->data = newData; // put in the data
    newNode->next = (*headRef); // link the old list off the new node
    (*headRef) = newNode; // move the head to point to the new node

}

void insertnth(struct node** headRef, int index, int data)
{
// position 0 is a special case...
    if (index == 0) Push(headRef, data);
    else
{
        struct node* current = *headRef;
        int i;
        for (i=0; i<index-1; i++) {
        assert(current != NULL); // if this fails, index was too big
        current = current->next;
        }
    assert(current != NULL); // tricky: you have to check one last time
    Push(&(current->next), data); // Tricky use of Push() --
    // The pointer being pushed on is not
    // in the stack. But actually this works
    // fine -- Push() works for any node pointer.
}
}
void printlist(struct node *headref)
{
    struct node * i = headref;
    for(i=headref; i!=NULL; i=i->next)
        printf("%d\n",i->data);
}
/*void sortedinsert(struct node ** headref , int newdata)
{
    struct node * current = (*headref);
    int count = 0;

    while((current!=NULL) && (current->data < newdata ))
       {
        count++;
        current = current->next;
       }
    insertnth(&(current->next),count,newdata);
}*/

void main()
{
    struct node* head = NULL; // start with the empty list.
    insertnth(&head, 0, 1);
    insertnth(&head, 1, 2);
    insertnth(&head, 1, 2);

//    SortedInsert(&head, 5);
    printlist(head);
}
