#include <stdio.h>

int main(int ac, char **av[])
{
    char prompt = "$ ";
    char *lineptr = NULL;
    size_t *n;
    int lread;

    lread = getline(lineptr, &n, stdin);
    printf("%d\n", lread);

    return (0);
}