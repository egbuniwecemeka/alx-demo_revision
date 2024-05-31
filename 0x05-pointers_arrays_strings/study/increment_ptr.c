#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */

const int MAX = 5;

int main(void)
{
	int i;
	int arr[] = {1, 2, 3, 4, 5};

	int *ptr = &arr;

	for (i = 0; i < arr[MAX - 1]; i++)
	{
		printf("Address of arr[%d]: %d\n", i, ptr);
		printf("Value of arr[%d]: %d\n", i, *ptr);

		ptr++;
	}

	return (0);
}
