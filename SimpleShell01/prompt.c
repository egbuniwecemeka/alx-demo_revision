#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    char *prompt = "$ ";
    char *lineptr = NULL;
    size_t n = 0;

    write(STDOUT_FILENO, prompt, 2);

    getline(&lineptr, &n, stdin);

    printf("%s\n", lineptr);

    return (0);
}
