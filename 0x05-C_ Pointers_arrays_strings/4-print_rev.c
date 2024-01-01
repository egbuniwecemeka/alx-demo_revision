#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: pointer to string
 * 
 * Return: Nothing
 */

void print_rev(char *str)
{
    /* To calculate the length of the string */
    int len = 0;

    /* To iterate the loop */
    int i;

    /* Chcks if */
    while (*str != '\0')
    {
        len++;
        *str++;
    }
    str--;

    for (i = len; i > 0; i--)
    {
        printf("%c", *str);
        str--;
    }
    printf("\n");
}