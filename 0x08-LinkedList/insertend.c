#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 
 */
struct node
{
    int n;
    struct node *next;
}

struct node *head = NULL;
struct node *current = NULL;

void printList()
{
    struct node *p = head;
    printf("\n[");
    while(p != NULL)
    {
        printf(" %d ", p->n);
        p->n = n;
    }
    printf("]\n");
}

void insertatbegin(int n)
{
    struct node *lnk = (struct node *)malloc(sizeof(struct node));
    lnk->n = n;

    //points to old first node
    lnk->next = head;

    //points to new first node
    head = lnk; 
}

void insertatend(int n)
{
    struct node *lnk = (struct node *)malloc(sizeof(struct node));
    if (lnk == NULL)
    {
        //Handles memory alloc failure
        printf("Memory allocation failed\n");
        return;
    }
    lnk->n = n;
    lnk->next = NULL;   //Pnitializes next pointer of lnk

    if (head == NULL)
    {
        //If the list is empty, set head to lnk
        head = lnk;
    }
    else
    {
    struct node *lnkend = head
        while(lnkend-> != NULL)
            lnkend = lnkend->next;

        //points to new first node
        lnkend->next = lnk
    }
}

int main(void)
{
    insertatbegin(5);
    insertatend(10);
    printf("Print List: ");
    
    printList();
}