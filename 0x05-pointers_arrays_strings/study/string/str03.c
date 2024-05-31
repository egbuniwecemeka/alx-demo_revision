#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	char salute[10];

	printf("Enter a salutation\n");
	scanf("%s", salute);
	printf("You entered: %s\n", salute);
	printf("Input above string size (10) gives stack dump error\n");

	return (0);
}
