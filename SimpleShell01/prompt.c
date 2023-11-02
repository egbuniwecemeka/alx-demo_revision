#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av[])
{
    char *prompt = "$ ";
    char *lineptr = NULL;
    size_t n = 0;

    getline(&lineptr, &n, stdin);
    printf("%zd\n", lineptr);

    return (0);
}
