#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Basic Operations in the Linked Lists
 * Insertion - 3 methods
 * Deletion
 * Updating
 * Displaying
 * Searching
 */

/** Insertion flowchart
 * For a list to be inserted between to nodes A & B, Firstly, create a node of same structure with the location it is to be inserted identified (C). 
 * i.e C->B && A->C
 */

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void printList()
{
    struct node *p = head;
    printf("\n[")
    while (p != NULL)
    {
        printf(" %d, ", p->data);
        p = p->next 
    }
    printf("]\n");
}

void insertatfirst(int data)
{
    //Create link
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->data = data;

    //Point to old first node
    link->next = head;

    //Point to new node
    head = link;
}

int main()
{
    insertatfirst(10);
    insertatfirst(30);
    printf("Linked list: ");

    //Print List
    printList();
}