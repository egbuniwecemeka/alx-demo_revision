#include "main.h"

/**
 * print_remaining_days - prints remaining days of a year left from a date
 * @month: month of the year
 * @day: day of the month
 * @year: year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}
		printf("Number of days: %d\n", day);
		printf("Remaining days of the year: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day -31, year);
		}
		else
		{
			printf("Number of days: %d\n", day);
			printf("Remaining days of the year: %d\n", 365 - day);
		}
	}
}
