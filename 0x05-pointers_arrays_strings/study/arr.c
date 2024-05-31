#include <stdio.h>

/**
 * main - Entry pint
 *
 * Return: Success (0)
 */
int main(void)
{
	int i;
	int num[5];

	for (i = 0; i < 5; i++)
	{
		num[i] = i +  100;
		printf("num[%d]: %d\n", i, num[i]);
	}

	return (0);
}
