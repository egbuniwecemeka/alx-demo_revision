#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int r;
	r = _isalpha('a');
	_putchar(r + '0');

	r = _isalpha('A');
	_putchar(r + '0');

	r = _isalpha(92);
	_putchar(r + '0');

	_putchar('\n');
	return (0);
}
