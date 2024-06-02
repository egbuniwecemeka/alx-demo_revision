#include "main.h"

/** main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	int len;

	str = "Software Engineering";

	len = _strlen(str);

	printf("String length: %d\n", len);

	return (0);
}
