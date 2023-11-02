#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av[])
{
    char *prompt = "$ ";
    char *lineptr = NULL;
    size_t n = 0;
    char *lread;

    lread = getline(&lineptr, &n, stdin);
    printf("%sg\n", lread);

    return (0);
}
