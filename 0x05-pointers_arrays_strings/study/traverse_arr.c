#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int i;
	int arr[] = {5, 10, 15, 20};
	int len = sizeof(arr) / sizeof(int);
	int *ptr = arr;

	for (i = 0; i < len; i++)
	{
		printf("Address of subscript %d = %d Value = %d\n", i, ptr, *ptr);
		*ptr++;
	}

	return (0);
}
