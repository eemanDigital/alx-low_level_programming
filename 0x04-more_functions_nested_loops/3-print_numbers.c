#include "main.h"
/**
 * print_numbers - entry function to print 0 - 9
 * Return:0
 */
void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
	_putchar(a + '0');
	a++;
	}
	_putchar('\n');
}
