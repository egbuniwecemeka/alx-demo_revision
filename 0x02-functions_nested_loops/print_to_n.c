#include "f_nest.h"

/**
 * main - Entry point
 * 
 * Return: 0 (Success)
 */

int main(void)
{
    printn_to_x(0);
    printn_to_x(50);
    printn_to_x(120);

    return (0);
}

int printn_to_x(int n)
{
    int x = 70, i;

    if (n <= x)
    {
        for (i = n; i <= x; i++)
        {
            printf("%d", i);

            if (i < x)
                printf(", ");
        }
    }
    else if(n >= x)
    {
        for (i = n; i >= x; i--)
        {
            printf("%d", i);

            if (i > x)
                printf(", ");
        }
    }
    putchar('\n');
}