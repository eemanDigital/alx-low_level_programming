#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: point variable
 * Return: the legnth of the string
 */
int _strlen(char *s)
{
	int ctr;

	for (ctr = 0; *s != '\0'; ++s)
	++ctr;
	return (ctr);

}
