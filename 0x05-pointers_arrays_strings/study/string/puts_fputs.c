#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	char fullname[20] = "Emeka Junior\n";

	printf("With puts(): ");
	puts(fullname);
	printf("With fputs: \n");
	fputs(fullname, stdout);

	return (0);
}

