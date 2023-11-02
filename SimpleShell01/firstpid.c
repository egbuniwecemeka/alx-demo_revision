#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	pid = getpid();

	printf("%d\n", pid);

	return (0);
}
