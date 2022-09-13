#include "main.h"
/**
 *jack_bauer - print every minute of the day of Jack Baue
 */
void jack_bauer(void)
{
	int minutes;
	int hours;

	for (hours = 0; hours <= 23; ++hours)
	{
	for (minutes = 0; minutes <= 59; ++minutes)
	{
	_putchar((hours / 10) + 48);
	_putchar((hours % 10) + 48);
	_putchar(':');
	_putchar((minutes / 10) + 48);
	_putchar((minutes % 10) + 48);
	_putchar('\n');
	}
	}
}
