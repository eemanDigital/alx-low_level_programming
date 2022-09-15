#include "main.h"
/**
 * print_diagonal - entry function to print line
 * @n: var
 * Return: 0
 */
void print_diagonal(int n)
{
	int a = 0, aa;

	while (a < n && n > 0)
	{
	aa = 0;
	while (aa < a)
	{
	_putchar(' ');
	aa++;
	}
	_putchar('\\');
	_putchar('\n');
	a++;
	}
	if (a == 0)
	_putchar ('\n');
}
