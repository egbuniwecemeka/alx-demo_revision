#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * main - checks the code
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = CHAR_MIN;

	while (c != CHAR_MAX)
	{
		printf("%d\n", c);
		c += 1;
	}

	return (0);
}
