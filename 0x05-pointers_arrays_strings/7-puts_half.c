#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: string ref variable
 * Return: 0
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	;
	a++;
	for (a /= 2; str[i] != '\0'; a++)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
