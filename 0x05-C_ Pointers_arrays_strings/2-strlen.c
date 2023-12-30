#include "main.h"

/**
 * calculates the length of a string
 * 
 * Return: string length
 */

int _strlen(char *str)
{
    int count;
    if (*str == '\0')
    {
        printf("End of string\n");
    }        
        
    count = strlen(str);
    return count;
}