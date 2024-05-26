#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success(0)
 */
int max(int, int);

int main(void)
{
	int val;

	val = max(50, 35);

	printf("The max val: %d\n", val);

	return (0);
}

/**
 * max - returns the max value of two integers
 * @a: Integer1
 * @b: Integer2
 *
 * Return: Max value
 */

int max(int a, int b)
{
	int result;
	if (a > b)
	{
		result = a;
		printf("%d\n", result);
	}
	else
	{
		result = b;
		printf("%d\n", result);
	}
	return (result);
}
