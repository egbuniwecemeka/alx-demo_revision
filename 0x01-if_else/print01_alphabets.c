#include <stdio.h>

/**
 * main - checks the code
 * 
 * Return: 0 (on success)
*/

int main(void)
{
    char userId[12] = "emekacodes";
    int i;

    for (i = 0; i < 12; i++)
        putchar(userId[i]);

    putchar('\n');

    return (0);    
}