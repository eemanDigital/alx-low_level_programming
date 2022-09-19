#include "main.c"
/**
 * print_rev - function to prints a string, in reverse.
 * @s: pointer to var
 * Return: 0
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
	a++;
	while (a--)
	_putchar(s[a]);
	_putchar('\n');

}
