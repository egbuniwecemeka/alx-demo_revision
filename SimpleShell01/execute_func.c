#include "main.h"

char execute_func(char *line)
{
    pid_t pid;
    char *token;
    char *delim = " ";
    char argv[MAX_ARGS];    //Define MAX_ARGS in main.h
    int argc;

    token = strtok(line, delim);

    while (token != NULL)
    {
        argv[argc++] = token;

        token = strtok(NULL, delim);
    }

    argv[argc] = NULL;

    pid = fork();

    if (pid == -1)
    {
        perror("fork\n");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        const char *path  = "/bin";

        char command_path[300];

        if ((access(command_path, X_OK)) == 0)
        {
            if (execve(command_path, argv, NULL) == -1)
            {
                write(2, "Error in execve\n", 16);
                exit(EXIT_FAILURE);
            }
            // If the loop completes, the command was not found
            write(2, "Command not found\n", 18);
            exit(EXIT_FAILURE);
            
        }
        


    }
    
            

}