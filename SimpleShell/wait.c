#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - checks the code
 * 
 * argv:
 * execv:
 * 
 * Return:  
 */

int main(void)
{
    pid_t pid;

    char *argv[] = {"/bin/ls", "-l", NULL};

    pid = fork();

    if (pid == -1)
        return (-1);

    if (pid == 0)
    {
        int val = execve(argv[0], argv, NULL);

        if (val == -1)
        {
            perror("Error\n");
        }        
    }
    else
    {
        wait(NULL);
        printf("Execve was successful\n")
    }
    
    return (0);
}