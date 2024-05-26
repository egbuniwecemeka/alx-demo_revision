#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */

int factorial(int);

int main(void)
{
	int fval;
	fval = factorial(7);

	printf("%d! = %d\n", 7, fval);
	printf("%d! = %d\n", 4, factorial(4));

	return (0);
}

int factorial(int n)
{
	int factval;
	factval = 1;
	while (n != 1)
	{
		factval *= n--;
	}
	return factval;
}
