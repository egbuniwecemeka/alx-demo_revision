#include <stdio.h>
#include <unistd.h>
#include <sys/types>

/**
 * main - checks the code
 * 
 * Return: 0 (On Success)
 */

int main(void)
{
    pid_t ppid;
    ppid = getpid();

    printf("%u\n", ppid);
    return (0);
}

/* Why does echo $$ print d same value as ppid? 

echo $$ prints the pid of the current shell*/