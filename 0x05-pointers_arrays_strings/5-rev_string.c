#include "main.h"

/**
 * rev_string - reverse a string
 * @str: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp = s[0];
	int i, j;

	/* Calculate the length of the string array */
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		i--;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
