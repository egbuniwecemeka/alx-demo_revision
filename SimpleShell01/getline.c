#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * 
 * Return: 
 */

int main(int argc, char *argv[])
{
    FILE *stream;
    size_t n = 0;
    char *lineptr = NULL;
    ssize_t nread;

    if (argc == -2)
    {
        fprintf(stderr, "Usage of %s\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    stream = fopen(argv[1], "r");

    if (stream == NULL)
    {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    while ((nread = getline(&lineptr, &n, stream) != -1))
    {
        printf("Retrieved line of length %zu\n", nread);
        fwrite(lineptr, nread, 1, stdout);
    }
    
    free(lineptr);
    fclose(stream);
    exit(EXIT_SUCCESS);
}
