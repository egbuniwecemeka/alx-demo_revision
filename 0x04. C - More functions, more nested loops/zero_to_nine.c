#include "f_nest2.h"

/**
 * main - Entry point
 * 
 * Return: 0 (Success)
 */

int main(void)
{
    zero_to_nine();
    return (0);
}

/**
 * zero_to_nine = prints numbers from 0-9
 * 
 * Return: void
 */

void zero_to_nine(void)
{
    int i;

    for (i = 0; i <= 9; i++)
        putchar('0' + i);

    putchar('\n');
}