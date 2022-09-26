#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to array input
 * @c: char to locate from input array
 *
 * Return: first occurence of charatcer or null if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
