#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int i;
	int salute[] = {'H', 'e', 'l', 'l', 'o', '\0'};

	for (i = 0; i <= 5; i++)
	{
		printf("%c", salute[i]);
	}

	putchar('\n');

	return (0);
}
