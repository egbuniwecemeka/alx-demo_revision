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

	printf("Enter your name: ");

	// Good alternative to accept input
	scanf("%[^\n]s", fullname);
	printf("You entered: %s\n", fullname);

	return (0);
}
