#include "main.h"

/**
 * insert_delete - deletes a data oe element from a stack
 *
 * Return: void
 */
void stack_del(void)
{
	int stack[LIMIT], top, element;

	if (top == -1)
		printf("Stack underflow");	/* Error message if stack is empty */
	else
	{
		element = stack[top];	/* retreives element at the top and assigns it to element */
		printf("Deleted element: %d\n", stack[top]);	/* prints deleted element */
		top--;	/* Decrements top variable effectively deleting the topmost element */
	}
}
