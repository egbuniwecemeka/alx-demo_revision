#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string's length to be returned
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
