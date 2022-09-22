
#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to first string
 * @s2: A pointer to the second string
 * Return: If str1 - str2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
