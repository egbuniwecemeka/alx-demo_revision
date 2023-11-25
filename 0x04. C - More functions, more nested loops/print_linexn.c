#include "f_nest2.h"

/**
 * main - Entry point
 * 
 * Return: 0 (Success)
 */

int main(void)
{
    print_linexn(0);
    print_linexn(2);
    print_linexn(8);
}

/**
 * print_linexn - prints a straight line n times.
 * @n: length of string
 * 
 * Return: void
 */
void print_linexn(int n)
{
    int i;
    if (n > 0)
    {
        for (i = 0; i < n; i++)
            putchar('_');
        putchar('\n');
    }
    else
        putchar('\n');
}