#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	char s[10] = "My School!";

	printf("%s\n", s);

	rev_string(s);

	printf("%s\n", s);

	return (0);
}
