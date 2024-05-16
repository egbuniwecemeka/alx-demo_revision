#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	const char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, text, strlen(text));
	return (0);
}
