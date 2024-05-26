#include <stdio.h>

void printHello(char *name)
{
	printf("Hello dear %s\n", name);
	return;
}

int printGoodbye(char *name)
{
	printf("Goodbye dear %s\n", name);
	return (1);
}

int main(int argc, char *argv[])
{
	printHello("Sarah");
	int a = printGoodbye("Pelumi");

	printf("printGoodbye returns: %d\n", a);

	return (0);
}
