#include <stdio.h>
#include <string.h>

/** */

int main(void)
{
    char *str[] = "Hello, I am a Software Engineer @ ALX";
    const char *delim[5] = " ";
    char *token;

    token = strtok(str, delim);

    printf("%s\n", str);

    return (0);
}