#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int age = 10;

	int *ptr = &age;

	double age1 = 11;

	double *ptr1 = &age1;

	printf("Address age: %d\n", &age);
	printf("Address *ptr: %d\n", ptr);
	printf("Incremented ptr address: %d\n", ++ptr);
	printf("Decremented ptr address: %d\n", --ptr);
        printf("Address age: %d\n", &age1);
        printf("Address *ptr: %d\n", ptr1);
	printf("Incremented double ptr address: %d\n", ++ptr1);
	printf("Decremented double ptr address: %d\n", --ptr1);

	return (0);
}
