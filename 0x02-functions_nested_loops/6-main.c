#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success(0)
 */
int main(void)
{
	int r;
	r = _abs(-6);
	printf("%d\n", r);

	r = _abs(-7);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
