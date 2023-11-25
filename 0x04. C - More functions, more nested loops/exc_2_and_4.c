#include "f_nest2.h"

/**
 * main - Entry point
 * 
 * Return: 0 (Success)
 */

int main(void)
{
    print_except();

    return (0);
}

/**
 * print_except - prints numbers from 0-9 except 2 & 4
 * 
 * Return: void
*/

void print_except(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        if (i != 2 && i != 4)
            putchar('0' + i);
        putchar('\n');
    }
}