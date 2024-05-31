#include <stdio.h>

/**
 * main - Entry pont
 *
 * Return: Success (0)
 */
int main(void)
{
	char name[] = "Emma";
	int i;

	for (i= 0; i < 4; i++)
	{
		printf("name[%d]: %c arr_size: %lu\n", i, name[i], sizeof(name));
	}

	return (0);
}
