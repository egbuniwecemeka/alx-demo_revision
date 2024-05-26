#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int r;
	r = _islower('H');
	_putchar(r + '0');

	r = _islower('b');
	_putchar(r + '0');

	r = _islower(110);
	_putchar(r + '0');

	r = _islower(96);
	_putchar(r + '0');

	_putchar('\n');
	return (0);
}
