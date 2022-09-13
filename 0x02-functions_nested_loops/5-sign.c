#include "main.h"
/**
 * print_sign - check the sign of a numbe
 *
 * @n: check function input
 *
 * Return: returns outputs
 */
int  print_sign(int n)
{
	if (n > 0)
	{
	_putchar ('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar ('-');
	return (-1);
	}
	_putchar ('0');
	return (0);
	}

}
