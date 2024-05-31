#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int i, sum = 0;
	int marks[10] = {0,1,2,3,4,5,6,7,8,9};
	float avg;

	for (i = 0; i < 10; i++)
	{
		sum += marks[i];
	}

	avg = (float)sum / 10;

	printf("Average: %f\n", avg);

	return (0);
}
