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

	printf("Please enter your name\n");

	// fgets can be used to accept input from any input stream
	// such as stdin (keyboard) and FILE(file stream)

	fgets(fullname, sizeof(fullname), stdin);

	printf("You entered: ");
	printf("%s", fullname);

	return (0);
}
