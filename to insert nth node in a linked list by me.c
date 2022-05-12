#include<stdio.h>
#include<stdlib.h>

struct node
{
    int item;
    struct node * next;
};
void insertnth(struct node ** headref , int index , int data);
void push(struct node** headref , int data);
void printlist(struct node * headref);

int main()
{
    struct node * head = NULL;
    insertnth(&head,0,1);
    insertnth(&head,1,5);
    insertnth(&head,1,9);

    printf("\n");

    printlist(head);
    return 0;
}
void push(struct node ** headref, int data)
{
    struct node * newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->item = data;
    newnode->next = (*headref);    //error may be
    (*headref) = newnode;
}
void insertnth(struct node ** headref , int index , int data)
{
   if (index == 0) push(headref, data);     //
    else                                       //
    {   int count=0;
        struct node * current = (*headref);

        while(count<index-1)
        {
            current = current->next;
            count++;
        }
        push(&(current->next),data); //error may be
        }
}
void printlist(struct node * headref)
{
    struct node * i;
    i = headref;

    while(i!=NULL)
    {
        printf("%d\t",i->item);
        i = i->next;
    }
}
