#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int i;
	int arr[] = {2, 4, 6, 8, 10};

	for (i= 0; i < 4; i++)
	{
		printf("arr[%d]: %d Address: %p\n", i, arr[i], &arr[i]);
	}

	return (0);
}
