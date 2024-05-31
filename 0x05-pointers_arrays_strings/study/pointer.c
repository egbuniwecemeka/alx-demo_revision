#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int score = 50;

	int *ptr;

	ptr = &score;

	printf("Address of score: %p\n", &score);

	printf("Address of pointer: %p\n", ptr);


	printf("Value of ptr:%d\n", *ptr);

	return (0);
}
