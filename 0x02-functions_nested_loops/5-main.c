#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int r;

	r = print_sign(30);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	r = print_sign(-5);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
