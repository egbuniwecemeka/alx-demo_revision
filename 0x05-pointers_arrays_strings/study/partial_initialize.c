#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	int i;
	int partial[7] = {1,2, [5] = 18, 4};

	for (i = 0; i < 8; i++)
	{
		printf("partial[%d]: %d\n", i, partial[i]);
	}

	return (0);
}
