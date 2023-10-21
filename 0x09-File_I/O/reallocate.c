#include <unistd.h>
#include <stdlib.h>
/**
 * create_buffer - creates a buffer and allocates memory to it
 * @file: name of file char is stored for
 * 
 * Return: A pointer to newly allocated buffer
*/

char *create_buffer(char *file)
{
    char *buffer;

    buffer = malloc(sizeof(char) * 1024);

    if (buffer == NULL)
    {
        dprintf(STDERR_FILENO, "Error: Can't write into %s", file);
        exit(99);
    }
    return (buffer);
}

void close_file(int fd)
{
    int c;

    c = close(fd);

    if (c == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
        exit(100);
    }
}

