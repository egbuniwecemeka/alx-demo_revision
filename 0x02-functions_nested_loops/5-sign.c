#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: integer's sign to be printed
 *
 * Return: 1 if positive, 0 if zero amd -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
