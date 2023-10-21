#include <stdio.h>
#include <string.h>

/**
 * main - checks the code
 * 
 * Return: 0 (On success)
*/

int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    putchar('\n');

    return (0);
}