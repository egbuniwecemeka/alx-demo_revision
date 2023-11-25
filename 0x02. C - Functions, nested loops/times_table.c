#include "f_nest.h"

/**
 * main - Entry point
 * 
 * Return: 0 (On success)
 */

int main(void)
{
    times_table();  /* Function call */

    return (0);
}

void times_table(void)
{
    int row, column;

    int res;

    for (row = 0; row <= 9; row++)  /* Outer loop(Rows) */
    {
        for (column = 0; column <= 9; column++) /* Inner loop(Columns) */
        {
            res = row * column; /* Calculates result of current row & column */
            printf("%2d", res); /* Formatted output in 2sf */
        }
        printf('\n');
    }
}

