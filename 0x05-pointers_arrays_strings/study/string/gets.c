#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	char fullname[20];

	printf("Enter your full name\n");

	// This is an unformatted input function.
	// It accepts strings regardless of whitespaces
	// Note: It has been deprecated in recent versions
	// Use fgets
	gets(fullname);
	printf("You entered:");
	printf("%s\n", fullname);

	return (0);
}
