#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t pid;
    pid_t ppid;

    //what does fork do?
    ppid = fork();

    /* Error handling */
    if (pid == -1)
    {
        perror("Unsuccessful\n");
        return (1);
    }

    /* process handling in child*/
    if (pid == 0)   //pid in the child returns 0
    {
        sleep(40);
        printf("I am the child\n");
    }
    else
    {
        ppid = getpid();
        printf("Parent pid is: %d", ppid);
    }
    
    return (0);
}