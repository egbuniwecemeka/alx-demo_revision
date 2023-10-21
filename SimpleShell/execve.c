#include <unistd.h>
#include <stdio.h>

/**
 * main - checks the list of files in shell
 * 
 * Return: 0 (success)
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", NULL};

    int val = execve(argv[0], argv, NULL);

    if (val == -1)
        perror("Error\n");

    printf("execve was successful\n");

    return (0);
}