#include "main.h"
/**
 * print_last_digit - print last digit of number
 * @n:int input
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l_digit;

	if (n < 0)
	l_digit = -1 * (n % 10);
	else
	l_digit = n % 10;
	_putchar(l_digit + '0');
	return (l_digit);
}
