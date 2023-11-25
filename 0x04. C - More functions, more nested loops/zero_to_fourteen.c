#include "f_nest2.h"

/**
 * main - Entry point
 * 
 * Return: 0 (Success)
 */

int main(void)
{
    zero_to_fourteenx10();

    return (0);
}

/**
 * zero_to_fourteen - prints the digits from 0-14 ten times.
 * 
 * Return: void
*/

void zero_to_fourteenx10()
{
    int i, j, num;      /* variable declaration */

    for (i = 0; i <= 10; i++)   /* loops 0-14 ten times */
    {
        for (j = 0; j <= 14; j++)   /* loops from 0-14*/
        {
            if (j >= 10)    /* condition to handling values above 9 */
            {
                num = j / 10;   /* first character. (eg 12) it handles 1*/
                putchar('0' + num);
            }
            putchar('0' + j % 10);  /* prints last character. (eg 12) it handles 2*/
        }
        putchar('\n');
    }
}