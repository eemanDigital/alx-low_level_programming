#include "main.h"
/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	int index, a, b;

	index = 0;
	while (s[index] != '\0')
	{
	a = 0;
	b = 1;
		while (accept[a] != '\0')
		{
			if (s[index] == accept[a])
			{
				b = 0;
				break;
			}
			a++;
		}
		if (b == 1)
			break;
		index++;
	}

	return (index);
}
