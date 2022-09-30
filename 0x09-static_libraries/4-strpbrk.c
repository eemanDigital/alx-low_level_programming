#include "main.h"
/**
 * _strpbrk - a function that searches a
 *            string for any of a set of bytes.
 *
 * @s: pointer to  str input
 * @accept: points to string @s
 *
 * Return: pointer to the bytes in @s
 *         or NULL if no such byte exist
*/

char *_strpbrk(char *s, char *accept)
{
	int i, a;

	i = 0;
	while (s[i] != '\0')
	{
		a = 0;
		while (accept[a] != '\0')
		{
			if (s[i] == accept[a])
				return (s + i);
			a++;
		}
		i++;
	}
	return ('\0');
}
