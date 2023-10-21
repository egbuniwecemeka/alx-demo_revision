#include <strings.h>

int main(void)
{
    char *str[] = "Thank you Jesus!";
    char *delim = " ";
    int token;

    token = strtok(str, delim);

    printf("%s\n", token);

    return (0);

}