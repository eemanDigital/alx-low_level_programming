#include "main.h"
/**
 * print_alphabet - entru point func
 *
 * Description: prints the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	_putchar(ch);
	ch++;
	}
	_putchar('\n');
}

