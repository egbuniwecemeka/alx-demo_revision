#include "main.h"

/**
 * _isalpha - checks alphabetic character whether its uppercase or lowercase
 * @c: character to check
 *
 * Return: If uppercase or lowercase
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 123 || c >= 65 && c <=90)
	{
		return (1);
	}
	return (0);
}
