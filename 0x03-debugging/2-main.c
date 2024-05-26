#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int a, b, c;
	int largest;

	a = 22;
	b = -5;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest\n", largest);

	return (0);
}
