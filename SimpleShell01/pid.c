#include <unistd.h>
#include <sys/types>

/**
 * main - checks the code
 * 
 * Return: 0 (On Success)
 */

int main(void)
{
    pid_t pid;
    pid = getpid();

    printf("%u\n", pid);
    return (0);
}