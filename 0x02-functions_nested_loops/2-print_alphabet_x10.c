#include "main.h"

/**
 * print_alphabetx10 - prints letters a - z ten times.
 *
 * Return: Success (0)
 */
void print_alphabetx10(void)
{
	int a, i;
	i = 0;
	while (i < 10)
	{
		a = 97;
		 while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
