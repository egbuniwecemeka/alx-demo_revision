#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av[])
{
    char *prompt = "$ ";
    char *lineptr = NULL;
    size_t n = 0;
    int lread;

    lread = getline(&lineptr, &n, stdin);
    printf("%s\n", lread);

    return (0);
}
