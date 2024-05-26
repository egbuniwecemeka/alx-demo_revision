#include "main.h"

/**
 * _putchar - print characters to stdout
 * @c: Input text
 *
 * Return: Success (0)
 */
int _putchar(char c)
{
	return write(1, &c, 1);;
}
