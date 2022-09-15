#include "main.h"
/**
 * print_square - entry function to print square
 * @size: var
 * Return: 0
 */
void print_square(int size)
{
	int a = 0, aa;
	
	while (a < size && size > 0)
	{
	aa = 0;
	while (aa < size)
	{
	_putchar('#');
	aa++;
	}
	_putchar('\n');
	a++;
	}
	if (a == 0)
	_putchar('\n');
}
