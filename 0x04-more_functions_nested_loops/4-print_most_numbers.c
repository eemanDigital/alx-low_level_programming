#include "main.h"
/**
 * print_most_numbers - entry function to print 0 - 9
 * skip 2 and 4
 * Return:0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; ++n)
	{
	if (n == 2 || n == 4)
	continue;
	_putchar(n + 48);
	}
	_putchar('\n');
}
