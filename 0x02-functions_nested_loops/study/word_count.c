#include <stdio.h>
#include <string.h>

void first_love(char *name)
{
	int i = strlen(name);
	printf("%s consist of %d characters\n", name, i);
}

int second_love(char *name)
{
	int i = strlen(name);
	first_love(name);
	return (i);
}

int main(int argc, char *argv)
{
	int i = second_love("Jehmima");
	printf("second_love has %d\n", i);
	return (0);
}
