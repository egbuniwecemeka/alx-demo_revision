#include "main"

/* Assuming temp is a global variable pointing to top of stack & struct node is node structure */

void push()
{
	int data;
	struct node *ptr = (struct node *)malloc(sizeof(struct node));

	if (ptr == NULL)
	{
		printf("Stack overflow\n");
	}
	else
	{
		printf("Enter value to be inserted: ");
		scanf("%d", &data);
		if (temp == NULL)	/*if stack is empty, create a new node and update temp pointer */
		{
			ptr->data = data;
			ptr->next = NULL;
			temp = ptr;
		}
		else
		{
			ptr->data = data;
			ptr->next = temp;
			temp = ptr;
		}
	}
}
