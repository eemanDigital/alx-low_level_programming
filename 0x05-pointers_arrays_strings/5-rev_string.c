#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: string parameter input
 * Return: void
 */
void rev_string(char *s)
{
	int length, a;
	char ch;

	for (length = 0; s[length] != '\0'; ++length)
	;
	for (a = 0; a < length / 2; ++a)
	{
	ch = s[a];
	s[a] = s[length - 1 - a];
	s[length - 1 - a] = ch;
	}
}
