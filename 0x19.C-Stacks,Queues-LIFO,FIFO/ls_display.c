#include "main.h"

void display()
{
	int i;
	struct node *ptr;
	ptr = temp;

	if (ptr == NULL)
	{
		printf("Stack underflow");
	}
	else
	{
		printf("The elements of the stack are:\n");
		while (ptr != NULL)
		{
			printf("%d\n", ptr->data);
			ptr = ptr->next;
		}
	}
}
