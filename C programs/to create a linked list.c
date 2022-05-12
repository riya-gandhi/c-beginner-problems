#include<stdio.h>
/*errors that can be done while working with structures and pointers
1. avoid multiple declaration using comma operator
2. check assignment to array type using pointers
3. instead of using type def use struct keyword everywhere you reference the structure
4. TAKE CARE OF MEMORY MAPS.
5. ALWAYS DRAW A MEMORY MAP TO KEEP TRACK OF LOCAL VARIABLES , THEIR COPIES AND USE OF REFERENCING!

The best solution will be an independent function which
adds a single new node to any list. We can then call that function as many times as we
want to build up any list.

 1.Takes a list and a data value.
 2.Creates a new link with the given data and pushes
 3.it onto the front of the list.
 4.The list is not passed in by its head pointer.
 5.Instead the list is passed in as a "reference" pointer to the head pointer -- this allows us to modify the caller's memory.
*/
#include<stdlib.h>
struct node
{
    int  item;
    struct node *next;
};

struct node * add(struct node * head,struct node * first , int num) //will return a pointer to start of list
{
    struct node* a;
    a->item = num ;
    head->next = num;
    num->next = first;
}
void printlist(struct node * head)
{
    struct node * i = head ;
    while(i!=NULL)
    {
        printf("%d",*(i->item));
        i = i->next;
    }
}

int main()

{

    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    first->item = 1;
    first->next = second ;

    second->item = 2;
    second->next = third ;

    third->item = 3;
    third->next = NULL ;

    printf("\ncurrent list\n");
    printlist(&first);

    printf("\nenter element to add in the list\n");

    add(&first,&second,10);

    printlist(&first);

    return 0;
}
