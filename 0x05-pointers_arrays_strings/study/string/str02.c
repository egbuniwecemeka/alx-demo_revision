#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	char salute[] = {'C', 'o', 'n', 'g', 'r', 'a', 't', 's', '\0'};

	// %s is used to print every character encountered in a string
	// until it reaches the null-character. Therefore eliminating
	// The use of a loop in this instance
	printf("%s Emeka!!\n", salute);

	return (0);
}
