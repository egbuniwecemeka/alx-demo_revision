#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to check
 *
 * Return: 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	return (0);
}
