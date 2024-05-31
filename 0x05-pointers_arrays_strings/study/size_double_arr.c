#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success(0)
 */
int main(void)
{
	int i;
	double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};

	for (i = 0; i < 4; i++)
	{
		printf("arr[%d]: %f \t Address: %p\n", i, arr[i], &arr[i]);
	}

	return (0);
}
