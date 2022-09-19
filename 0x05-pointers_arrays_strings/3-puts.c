#include"main.h"
/**
 * _puts - function that returns the length of a string
 * @str: pointer to var
 * Return: nothing
 */
void _puts(char *str)
{
	if (*str != '\0')
	{
	_putchar(*str + 0);
	++str;
	}
	_putchar('\n');
}
