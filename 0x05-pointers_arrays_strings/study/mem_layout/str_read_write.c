#include <stdio.h>

// name is a global array, (goes into data segment)
// Since it can be changed, therefore it has read-write permission
char name[] = "Software Engineering";

int main(void)
{
	printf("%s\n", name);

	name[0] = 'B';

	printf("%s\n", name);

	return (0);
}
