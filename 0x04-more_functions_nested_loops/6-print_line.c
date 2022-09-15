#include "main.h"
/**
 * print_line - entry function to print line
 * @n: var
 * Return:0
 */
void print_line(int n)
{
	int l = 0;

	while (l < n && n > 0)
	{
	_putchar('_');
	l++;
	}
	_putchar('\n');
}
