#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: string to be printed
 *
 * Return: void
 */
void print_rev(char *str)
{
	/* variables to iterate and calulate len of string */
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; str[i] > 0; i--)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
