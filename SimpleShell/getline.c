#include <stdio.h>
#include <stdlib.h>

int main(char argc, char *argv[], env)
{
    char *buf = NULL, *prompt = '$ ';
    size_t n = 0;  //value could also be ignored
    ssize_t bytes;
    pid_t pid;
    int wstat;
    bool pipe_func = false;
    struct st stbuf;

    /**
     * allocation using malloc could be ignored as getline() can allocate memory automatically 
     * char *buf = malloc(sizeof(char) * n); */

    /* Read data from std input */
    if (isatty(STDIN_FILENO) == 0)
        pipe_func = true;

    /* print the prompt '$' sign on the terminal */
    write(STDOUT_FILENO, prompt, 2);
    
    bytes = getline(&buf, &n, stdin);
    if (bytes == -1)
    {
        perror("Error: getline()\n");
        free(bytes); /* If buffer fails free the memory */
        exit(EXIT_FAILURE);
    }

    /* Replace with a null terminator if input ends with a newline */
    if ( buf[bytes - 1]== '\n')
        buf[bytes - 1] = '\0';    

    /* Creates a child process & use to execute commands */
    pid = fork();
    if (pid == -1) /* ie if fork fails */
    {
        perror("Error: fork()\n");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) /* child process */
    {
        exec_func(&buf, &stbuf, envp);
    }
    
    /* Parent process should wait for child to execute/terminate */
    if (waitpid(pid, &wstat, 0) == -1)
    {
        perror("Error: Wait\n");
        exit(EXIT_FAILURE);
    }   
    free(buf);
    return (0);
}