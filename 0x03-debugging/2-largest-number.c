#include "main.h"

/**
 * largest_number - function returning largest number of integers
 * @a: Integer a
 * @b: Integer b
 * @c: Integer c
 *
 * Return: Largest integer from input data
 */
int largest_number(int a, int b, int c)
{
	int largest;
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return largest;
}
