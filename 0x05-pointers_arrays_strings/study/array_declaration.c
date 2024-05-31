#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success(0)
 */
int main(void)
{
	int i;
	int arr[7] = {100, 200, 300, 400, 500, 600, 700};

	for (i = 0; i < 8; i++)
	{
		printf("arr[%d]: %d\n", i, arr[i]);
	}

	return (0);

}
