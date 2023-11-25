#include "f_nest2.h"

/**
 * main - Entry point
 * 
 * Return: 0 (Success)
 */

int main(void)
{
    print_square(2);
    print_square(5);
    print_square(20);
    
    return (0);
}

/**
 * print_square - prints a square using # character
 * @size: length and breadth of square
 * 
 * Return: void
 */
void print_square(int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            putchar('#');
        putchar('\n');
    }
    putchar('\n');
}