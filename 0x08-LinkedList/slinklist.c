#include <stdio.h>

/* Renaming struct node as a pointer (*nodePtr)*/
typedef struct node *nodePtr;

/* Data structure containing data & pointer */
struct node{
	int data;
	nodePtr next;
}

/* renaming struct node as node*/
typedef struct node node;

int main(void)
{
	/* pointer to first element of the list which is NULL, this means it does not point to a memory address/node*/
	nodePtr first = NULL;

	/* for first to point to a node, it has to point to new area of memory address, which is created using malloc*/
	first = malloc(sizeof(node));

	/* new node next pointer terminated ie assuming the list contains a single element/node/data*/
	first->next = NULL;

	/* new nodes data*/
	first->data = 234;


	/* Adding a second element/node. Note: This is also functional to point to/create a second node  but not conventional as it becomes bogus and not a good practice when dealing with multiple elements/nodes
	first->next = malloc(sizeof(node));
	(first->next)->next = NULL;
	(first->next)->data = 234 * 2; */

	/* Therefore, this constraint can be resolved by creating a temporary location/address to initiate a 3 way shuffle 
	 * 1st step - create a temporary memory location/node
	 * 2nd step - temporary node ptr points to first/head node
	 * 3rd step - copy temporary into first using (=)*/

	/* First step */
	nodePtr temp;
	temp = malloc(sizeof(node));

	/* Second step */
	temp->next = first;

	/* Third step */
	first = temp;

	return (0);
}
