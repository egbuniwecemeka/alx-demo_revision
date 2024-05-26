#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: Integer
 *
 * Return: List of natural numbers, separated by comms from n to 98
 */
void print_to_98(int n)
{
	int first = 1;
	if (n <= 98)
	{		
		while (n <= 98)
		{
			if (!first)
			{
				_putchar(',');
				_putchar(' ');
			}

			// Reset after printing first number
			first = 0;

			if (n < 0)
			{
				_putchar('-');
				if (-n >= 10)
				{
					_putchar((-n / 10) + '0');
				}
				_putchar((-n % 10) + '0');
			}
			else if (n == 0 && n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			if (!first)
			{
				_putchar(',');
				_putchar(' ');
			}

			first = 0;

			if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
			}
			else if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');

			n--;
		}
	}
	_putchar('\n');
}
