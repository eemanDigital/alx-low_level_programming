#include "main.h"
/**
 *  print_alphabet_x10 - prints alphabet x10times
 *
 * Description: prints 10time alphabets lowercase
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
