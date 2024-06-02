#include <stdio.h>

// array character cant be changed because it is a literal string
char *name = "Software Engine";

int main(void)
{
	name[0] = 'b';

	printf("%s\n", name);

	return (0);
}
