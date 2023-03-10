#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year, taking
 * lead years into account
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 10;
	day = 9;
	year = 1999;

	printf("Date: %02d/%2d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
