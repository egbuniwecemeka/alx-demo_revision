#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av[])
{
    char *prompt = "$ ";
    char *lineptr = NULL;
    size_t n = 0;

    fwrite(STDOUT_FILENO, prompt, 2);

    getline(&lineptr, &n, stdin);

    printf("%s\n", lineptr);

    return (0);
}
