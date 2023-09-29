#include <stdio.h>
#include <stdlib.h>

/**
 * Practice Problems (1 / 1)
    In the below program, we have declared three linked list variables i.e struct node *a, *b, *c.


    You have to do the following tasks.


    Task 1: You need to allocate dynamic memory for those nodes and assign values 100, 200, 300, respectively.


    Task 2: Create the following linked list by connecting the nodes. 

    c->a->b->NULL;

 */
int main()
{
    struct node
    {
        int data;
        struct node *next;
    }

    struct node *a, *b, *c;

    //Task 1
    a = (struct node *)malloc(sizeof(struct node));
    b = (struct node *)malloc(sizeof(struct node));
    c = (struct node *)malloc(sizeof(struct node));

    //Assigning values 
    a->data = 100;
    b->data = 200;
    c->data = 300;

    //Task 2
    c->next = a;
    a->next = b;
    b->next = NULL;

    struct node *temp = c;
    printf("\n[");
    while (temp != NULL)
    {
        printf(" %d ", temp->data)
        temp = temp->next;
    }
    printf("]\n");

    return (0);
}

