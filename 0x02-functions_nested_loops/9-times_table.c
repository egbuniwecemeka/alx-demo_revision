#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0.
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			int colrow_product;
			colrow_product = i * j;
			// Check for single digits & double digits
			if (colrow_product < 10)	
			{
				//Insert space in-front of single digits
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(colrow_product % 10 + '0');
			}
			else
			{
				_putchar(colrow_product / 10 + '0');
				_putchar(colrow_product % 10 + '0');
			}

			// Print for proper visual representation
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
