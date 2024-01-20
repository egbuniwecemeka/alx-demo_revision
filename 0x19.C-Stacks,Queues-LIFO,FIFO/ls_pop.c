#include "main.h"

int pop()
{
	int item;
	struct node *ptr;

	if (temp == NULL)	//check if stack is empty
	{
		printf("Stack underflow\n");
	}
	else
	{
		item = temp->data;	//Retrieves data at top of stack
		ptr = temp;		//Save pointer to top node in ptr pointer
		temp = temp->next;	//moves temp pointer to next node, removing top node
		free(ptr);		//Free memory to popped node
		printf("The deleted item is: %d", item);
	}
}
