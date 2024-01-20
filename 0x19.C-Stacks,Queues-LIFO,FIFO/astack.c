#include "main.h"

/* Global variables */
int stack[LIMIT];	//Array implementation
int top;		//for insertion and delete operations
int i;			//to transverse through the stack
int choice;		//to choose either of the 3 operations

void push(void);
void pop(void);
void display(void);

int main()
{
	printf("My Array Stack Implementation\n\n");

	top = -1;	//indicates an empty stack
	
	do {
		printf("ARRAY IMPLEMENTATION\n");
		printf("1, Insertion\n2. Deleting\n3. Displaying\n4. Exit\n");
		printf("Choose your option: ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			break;
			case 3:
			display();
			break;
			case 4:
			exit(0);
			break;
			default:
			printf("Not a valid choice\n");
			break;
		}
	 } while (choice != 4);	
		return (0);
}

	void push(void)
	{
		int element;

		if (top  == LIMIT - 1)
		{
			printf("Stack overflow\n");
		}
		else
		{
			printf("Enter a number to insert in the stack\n");
			scanf("%d", &element);
			top++;
			stack[top] = element;
			printf("The inserted element is: %d\n", stack[top]);
		}
	}

	void pop(void)
	{
		int element;

		if (top == -1)
		{
			printf("Stack underflow\n");
		}
		else
		{
			element = stack[top];
			printf("Element to be deleted from the stack is: %d\n", stack[top]);
			top--;
		}
	}

	void display(void)
	{
		if (top == -1)
		{
			printf("Stack underflow\n");
		}
		else if (top > 0)
		{
			printf("Elements of the stack are:\n");
			for (i = top; i >= 0; i--)
				printf("%d\n", stack[i]);
		}
	}
