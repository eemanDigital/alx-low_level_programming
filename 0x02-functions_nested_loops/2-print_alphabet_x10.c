#include "main.h"
/**
 * void print_alphabet_x10 - entry function
 *
 * Description: prints 10 times the alphabet, in lowercase
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int i;
	int charac;

	for (i = 0; i <= 9; ++i)
	{
	for (charac = 'a'; charac <= 'z'; charac++)
	_putchar(charac);
	_putchar('\n');
	}
}
