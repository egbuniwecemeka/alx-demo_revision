#include "main.h"

void stack_insert(void)
{
	int stack[LIMIT], top, element;

	if (top == LIMIT - 1)
		printf("Stackoverflow\n");
	else
	{
		/* Insert into stack */

		printf("Insert value into stack\n");
		scanf("%d", &element);
		top++;
		stack[top] = element;

		/* Print inserted value */
		for (int i = 0; i <= top; i++)
			printf("Stack val; %d\n", stack[i]);
	}
}
