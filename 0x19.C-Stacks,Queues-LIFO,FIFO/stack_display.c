#include "main.h"

/**/

void display()
{
	int stack[LIMIT], top, i;

	if (top == -1)
	{
		printf("Stack underflow\n");
	}
	else if (top >= 0)
	{
		for (i = top; i >= 0; i--)
			printf("Stack value: %d", stack[i]);
	}
}
